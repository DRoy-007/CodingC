#include <stdio.h>

int searchInRotatedSortedArr(int arr[], int n, int target){
    int start = 0, mid, end = n - 1;

    while (start <= end){
        mid = start + (end - start)/2;

        if (arr[mid] == target) return mid;

        if (arr[start] <= arr[mid]){
            if (arr[start] <= target && target <= arr[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            if (arr[mid] <= target && target <= arr[end]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to be found: ");
    scanf("%d", &target);

    printf ("The index of the target is: %d", searchInRotatedSortedArr(arr, n, target));

    return 0;
}