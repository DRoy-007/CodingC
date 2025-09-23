#include <stdio.h>

int lastOccurenceInSortedArray(int arr[], int n, int key){
    int start = 0, mid, end = n - 1, ans = -1;

    while (start <= end){
        mid = start + (end - start)/2;

        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] > key) end = mid - 1;

        else start = mid + 1;
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

    int key;
    printf("Enter the element of whose last occurence is to found: ");
    scanf("%d", &key);

    int lastOccured = lastOccurenceInSortedArray(arr, n, key);

    if (lastOccured == -1){ 
        printf("The given element is not present.\n"); 
        return 0;
    }

    printf ("The given element last occured at index: %d\n", lastOccured); 

    return 0;
}