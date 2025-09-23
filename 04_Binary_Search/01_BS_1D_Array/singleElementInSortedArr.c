#include <stdio.h>

int singleElementInSortedArr(int arr[], int n){
    if (n == 1) return 0;
    if (arr[0] != arr[1]) return 0;
    if (arr[n - 1] != arr[n - 2]) return n - 1;

    int start = 0, mid, end = n - 1;

    while (start <= end){
        mid = start + (end - start)/2;

        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) start = mid + 2;
            else end = mid;
        }

        else {
            if (arr[mid - 1] == arr[mid]) start = mid + 1;
            else end =  mid - 1; 
        }
    }

    return start;
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

    int ansIndex = singleElementInSortedArr(arr, n);

    printf("The single element is: %d\n", arr[ansIndex]);

    return 0;
}