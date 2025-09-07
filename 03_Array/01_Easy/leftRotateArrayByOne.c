#include <stdio.h>

void leftRotateArrayByOne(int arr[], int n){
    int temp;
    for (int i = 1; i < n; i++){
        temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
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

    leftRotateArrayByOne(arr, index);

    printf("The new rotated array is: ");
    for (int i = 0; i < index; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}