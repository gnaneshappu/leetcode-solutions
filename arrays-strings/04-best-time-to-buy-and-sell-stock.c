#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {
    // Test 1: typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("%d\n", maxProfit(prices1, 6));

    // Test 2: edge case - no profit
    int prices2[] = {7, 6, 4, 3, 1};
    printf("%d\n", maxProfit(prices2, 5));

    return 0;
}