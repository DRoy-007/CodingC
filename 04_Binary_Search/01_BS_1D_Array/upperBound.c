#include <stdio.h>

int upperBound(int arr[], int n, int target){ 
    int start = 0, end = n - 1, mid, ans = -1;

    while (start <= end){
        mid = start + (end-start)/2;

        if (target < arr[mid]){ 
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
    printf("Enter the target of whose upper bound is to found: "); 
    scanf("%d", &target);

    int upperBoundIndex = upperBound(arr, n, target); 

    if (upperBoundIndex == -1){ 
        printf("No upper bound is present for the target you given.\n"); 
        return 0;
    }

    printf ("The upper bound is: %d\n", arr[upperBoundIndex]); 

    return 0;
}