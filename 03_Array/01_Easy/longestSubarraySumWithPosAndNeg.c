#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)

int longestSubarraySumWithPosAndNeg(int arr[], int n, int k){
    int maxLen = 0;

    for (int i = 0; i < n; i++){
        int sum = 0;

        for (int j = i; j < n; j++){
            sum += arr[j];

            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
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

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("The length of largest subarray with the sum equal to %d is: %d\n",
           target, longestSubarraySumWithPosAndNeg(arr, index, target));

    return 0;
}