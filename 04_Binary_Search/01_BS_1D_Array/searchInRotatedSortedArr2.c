#include <stdio.h>

int searchInRotatedSortedArr2(int arr[], int n, int key){
    int start = 0, mid, end = n - 1;

    while (start <= end){
        mid = start + (end - start)/2;

        if (arr[mid] == key) return 1; // true

        if (arr[start] <= arr[mid]){
            if (arr[start] <= key && key <= arr[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            if (arr[mid] <= key && key <= arr[end]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return 0; // false
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

    int key;
    printf("Enter the element to be found: ");
    scanf("%d", &key);

    if (searchInRotatedSortedArr2(arr, n, key)) printf("The target is present in the given array.");
    else printf("The target is not present in the given array.");

    return 0;
}