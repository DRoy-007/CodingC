#include <stdio.h>

int selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] > arr[j]){
                // swap technique
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
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

    selectionSort(arr, sizeof(arr)/sizeof(int));

    printf("Sorted Array: ");
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}