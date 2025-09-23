#include <stdio.h>

int firstOccurence(int arr[], int n, int key){
    int start = 0, mid, end = n - 1, ans = -1;

    while (start <= end){
        mid = start + (end - start)/2;

        if (arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key) start = mid + 1;

        else end = mid - 1;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int key){
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

int countOccurencesInSortedArr(int arr[], int n, int key){
    int firstOccurIndex = firstOccurence(arr, n, key);
    
    if (firstOccurIndex != -1){
        int lastOccurIndex = lastOccurence(arr, n, key);
    
        return lastOccurIndex + 1 - firstOccurIndex;
    }

    return 0;
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

    printf("The number of %d(s) present in the array are %d.", key, countOccurencesInSortedArr(arr, n, key));

    return 0;
}