#include <stdio.h>
#define LONG_MIN -2147483648
#define max(a, b) ((a > b) ? a : b)

long long kadanesAlgorithm(int arr[], int n){
    long long currSum = 0, maxSum = LONG_MIN;

    for (int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0) currSum = 0;
    }

    return maxSum;
}

int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The maximum subarray sum is: %lld\n", kadanesAlgorithm(arr, index));

    return 0;
}