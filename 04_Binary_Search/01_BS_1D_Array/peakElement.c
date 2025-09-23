#include <stdio.h>

int peakElement(int arr[], int n){
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n-1] > arr[n-2]) return n-1;

    int start = 1, mid, end = n-2;

    while (start <= end){
        mid = start + (end - start)/2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) return mid;

        if (arr[mid] > arr[mid - 1]){
            start = mid + 1;
        }
        else end = mid - 1;
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

    int ansIndex = peakElement(arr, n);

    if (ansIndex == -1) printf("There is no peak elements in the given array.\n");
    else printf("The peak element is: %d\n", arr[ansIndex]);

    return 0;
}