#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}

// Local testing block
int main() {
    // Test Case 1: Typical profitable sequence
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1 Result: %d (Expected: 5)\n", maxProfit(prices1, 6));

    // Test Case 2: Edge Case (Monotonically decreasing prices / no profit)
    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2 Result: %d (Expected: 0)\n", maxProfit(prices2, 5));

    return 0;
}