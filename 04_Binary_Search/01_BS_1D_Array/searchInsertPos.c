#include <stdio.h>

int searchInsertPos(int arr[], int n, int target, int* index){
    int start = 0, end = n - 1, mid;

    while (start <= end){
        mid = start + (end-start)/2;

        if (target < arr[mid]){
            *index = mid;
            end = mid - 1;
        }
        
        else if (target > arr[mid]){
            start = mid + 1;
        }

        else {
            *index = mid;
            return 1;
        }
    }

    return 0;
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

    int index, isPresent;

    isPresent = searchInsertPos(arr, n, target, &index);

    if (isPresent) printf("%d is present at the array index %d.\n", target, index);
    else printf("%d is not present in the array but can be inserted at the index %d, without unsorting.\n", target, index);

    return 0;
}