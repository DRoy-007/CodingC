#include <stdio.h>

int lowerBound(int arr[], int n, int target){
    int start = 0, end = n - 1, mid, ans = -1;

    while (start <= end){
        mid = start + (end-start)/2;

        if (target <= arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        
        else {
            start = mid + 1;
        }
    }

    return ans;
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

    int target;
    printf("Enter the target of whose lower bound is to found: ");
    scanf("%d", &target);

    int lowerBoundIndex = lowerBound(arr, n, target);

    if (lowerBoundIndex == -1){
        printf("No lower bound is present for the target you given.");
        return 0;
    }

    printf ("The lower bound is: %d", arr[lowerBoundIndex]);

    return 0;
}