#include <stdio.h>

void recursiveInsertionSort(int arr[], int i, int n){
    if (i >= n) return; // base case

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]){
        // swap technique
        arr[j - 1] += arr[j];
        arr[j] = arr[j - 1] - arr[j];
        arr[j - 1] -= arr[j];
        j--;
    }

    recursiveInsertionSort(arr, i + 1, n);
}

int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    recursiveInsertionSort(arr, 0, index);

    printf("Sorted Array: ");
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}