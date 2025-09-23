#include <stdio.h>

int binarySearch(int arr[], int n, int target){
    int start = 0, end = n - 1, mid;

    while (start <= end){
        mid = start + (end-start)/2;

        if (target < arr[mid]){
            end = mid - 1;
        }

        else if (target > arr[mid]){
            start = mid + 1;
        }

        else return mid;
    }

    return -1;
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
    printf("Enter the target to find: ");
    scanf("%d", &target);

    int searchIndex = binarySearch(arr, n, target);

    printf("The target is present at the index: %d", searchIndex);

    return 0;
}