#include <stdio.h>

/**
 * Program to calculate item price plus 5.6% sales tax, 
 * displaying the result in rounded dollars and cents.
 */
int main() {
    double item_price;
    double total_cost;
    // Use long to safely store the total cost in cents, up to 2 billion dollars
    long total_rounded_cents;
    int dollars;
    int cents;
    const double SALES_TAX_RATE = 0.056;

    printf("Enter the price of the item to be purchased (e.g., 0.98): $");
    
    if (scanf("%lf", &item_price) != 1 || item_price < 0) {
        printf("Invalid price entered.\n");
        return 1;
    }

    // 1. Calculate the total cost including tax
    total_cost = item_price * (1.0 + SALES_TAX_RATE);
    
    // 2. Round the total cost to the nearest cent (nearest 1/100th of a dollar).
    // The standard C method for reliable rounding: multiply by 100, add 0.5, and truncate.
    // This correctly handles cases like $1.045 -> $1.05 (104.5 cents -> 105 cents)
    total_rounded_cents = (long)(total_cost * 100.0 + 0.5);

    // 3. Extract the whole dollar portion
    dollars = total_rounded_cents / 100;

    // 4. Extract the remaining cents portion
    cents = total_rounded_cents % 100;

    // Display the result in the specified format
    // %.2f is used to display the input price cleanly
    printf("\nItem price of $%.2f with sales tax is %d dollars and %d cents\n",
           item_price, dollars, cents);

    /*
     * Example 1 Check:
     * Price: $0.98
     * Total Cost: 0.98 * 1.056 = 1.03488
     * Rounded Cents: (long)(103.488 + 0.5) = (long)(103.988) = 103
     * Output: 1 dollars and 3 cents (Matches example)
     *
     * Example 2 Check:
     * Price: $0.99
     * Total Cost: 0.99 * 1.056 = 1.04544
     * Rounded Cents: (long)(104.544 + 0.5) = (long)(105.044) = 105
     * Output: 1 dollars and 5 cents (Matches example)
    */

    return 0;
}
