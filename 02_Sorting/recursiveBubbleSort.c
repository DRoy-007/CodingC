#include <stdio.h>

void recursiveBubbleSort(int arr[], int n){
    if (n == 1) return; // base case

    int didSwap = 0; // default: false
    for (int i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1]){
            arr[i] += arr[i + 1];
            arr[i + 1] = arr[i] - arr[i + 1];
            arr[i] -= arr[i + 1];

            didSwap = 1; // true
        }
    }

    if (didSwap == 0) return;

    recursiveBubbleSort(arr, n - 1);
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

    recursiveBubbleSort(arr, index);

    printf("Sorted Array: ");
    for(int i = 0; i < index; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}