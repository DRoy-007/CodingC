#include <stdio.h>
#define INT_MIN -2147483648
#define INT_MAX 2147483647

typedef struct stats{
    // all these variables cannot have negative value logically
    int buyDate;
    int buyPrice;  
    int sellDate;
    int sellPrice;
} stats;

stats buyAndSellStock(int arr[], int n){
    stats stockStats = {-1, -1, -1, -1};
    int currPrice, minPrice = INT_MAX, currProfit, maxProfit = 0, currMinPriceStartDate = -1;

    for (int i = 0; i < n; i++){
        currPrice = arr[i];

        if (minPrice > currPrice){
            minPrice = currPrice;
            currMinPriceStartDate = i + 1;
        }

        currProfit = currPrice - minPrice;

        if (maxProfit < currProfit){
            maxProfit = currProfit;

            stockStats.buyDate = currMinPriceStartDate;
            stockStats.buyPrice = minPrice;

            stockStats.sellDate = i + 1;
            stockStats.sellPrice = currPrice;
        }
    }

    if (maxProfit <= 0) (stats) {-1, -1, -1, -1};

    return stockStats;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    stats stockStats = buyAndSellStock(arr, n);

    if (stockStats.buyDate == -1 && stockStats.buyPrice == -1 && stockStats.sellDate == -1 && stockStats.sellPrice == -1)
        printf ("\nNo transactions are profitable in this case.\n");
    else
        printf ("\nThe maximum profitable transaction is to buy the stock on Day %d and sell it on Day %d.\nProfit = %d\n", stockStats.buyDate, stockStats.sellDate, stockStats.sellPrice - stockStats.buyPrice);

    return 0;
}