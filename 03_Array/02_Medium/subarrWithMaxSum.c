#include <stdio.h>
#define LONG_MIN -2147483648
#define max(a, b) ((a > b) ? a : b)

typedef struct index{
    int start;
    int end;
} index;

index subarrWithMaxSum(int arr[], int n){
    long long currSum = 0, maxSum = LONG_MIN;
    index currSubarrIndex = {0, 0};
    index maxSubarrIndex = {-1, -1};

    for (int i = 0; i < n; i++){
        if (currSum == 0) currSubarrIndex.start = i;

        currSum += arr[i];

        if (maxSum < currSum){
            maxSum = currSum;
            
            maxSubarrIndex.start = currSubarrIndex.start;
            maxSubarrIndex.end = i;
        }

        if (currSum < 0) currSum = 0;
    }

    return maxSubarrIndex;
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

    index maxSubarrIndex = subarrWithMaxSum(arr, n);
    printf("The subarray with the maximum sum is: ");
    for (int i = maxSubarrIndex.start; i <= maxSubarrIndex.end; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}