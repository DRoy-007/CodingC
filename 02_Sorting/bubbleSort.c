#include <stdio.h>

int bubbleSort(int arr[], int n){
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j + 1]){
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];
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

    bubbleSort(arr, index);

    printf("Sorted Array: ");
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}