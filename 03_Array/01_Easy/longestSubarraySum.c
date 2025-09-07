#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)

int longestSubarraySum(int arr[], int n, int k){
    int right = 0, left = 0, sum = 0, len = 0, maxLen = 0;

    while(right < n){
        sum += arr[right];
        len++;

        while (sum > k){
            sum -= arr[left];
            left++;
            len--;
        }

        if(sum == k) maxLen = max(len, maxLen);

        right++;
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

    printf("The length of largest subarray with the sum equal to %d is: %d\n", target, longestSubarraySum(arr, index, target));

    return 0;
}