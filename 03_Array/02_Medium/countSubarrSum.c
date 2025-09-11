#include <stdio.h>

int countSubarrSum(int arr[], int n, int k){
    int count = 0;

    for (int i = 0; i < n; i++){
        int sum = 0;

        for (int j = i; j < n; j++){
            sum += arr[j];

            if (sum == k) count++;
        }
    }
    return count;
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
    
    int k;
    printf("Enter the target sum: ");
    scanf("%d", &k);

    printf("The number of subarrays that sums upto %d are: %d\n", k, countSubarrSum(arr, n, k));

    return 0;
}
