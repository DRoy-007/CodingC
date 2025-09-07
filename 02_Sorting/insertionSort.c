#include <stdio.h>

int insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]){
            // swap technique
            arr[j - 1] += arr[j];
            arr[j] = arr[j - 1] - arr[j];
            arr[j - 1] -= arr[j];
            j--;
        }
    }
    return 0;
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

    insertionSort(arr, index);

    printf("Sorted Array: ");
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}