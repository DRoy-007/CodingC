#include <stdio.h>

int noOfArrRotation(int arr[], int n){
    int start = 0, mid, end = n - 1, ans = -1;

    while (start <= end){
        mid = start + (end - start)/2;

        if (mid < n - 1 && arr[mid] > arr[mid + 1]) {
            ans = mid + 1;
            break;
        }

        if (mid > 0 && arr[mid] < arr[mid - 1]) {
            ans = mid;
            break;
        }
        
        if (arr[start] <= arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
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

    int ans = noOfArrRotation(arr, n);

    if (ans == -1) printf("No rotations.\n");
    else printf("The number of times the array is rotated: %d\n", ans);

    return 0;
}