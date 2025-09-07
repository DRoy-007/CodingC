#include <stdio.h>

void arrReversal(int arr[], int start, int end){
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateArrayByK(int arr[], int n, int k){
    arrReversal(arr, 0, k - 1);
    arrReversal(arr, k, n - 1);
    arrReversal(arr, 0, n - 1);
}

void rightRotateArrayByK(int arr[], int n, int k){
    arrReversal(arr, 0, n - k - 1);
    arrReversal(arr, n - k, n - 1);
    arrReversal(arr, 0, n - 1);
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

    int k;
    printf("Enter the number of place to shift: ");
    scanf("%d", &k);

    char rotateDirection;
    printf("Enter rotate direction (L for left and R for right): ");
    scanf(" %c", &rotateDirection);

    if (rotateDirection == 'L' || rotateDirection == 'l'){
        leftRotateArrayByK(arr, index, k);

        printf("The new rotated array is: ");
        for (int i = 0; i < index; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    else if (rotateDirection == 'R' || rotateDirection == 'r'){
        rightRotateArrayByK(arr, index, k);

        printf("The new rotated array is: ");
        for (int i = 0; i < index; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    else printf("Invalid input.\n");

    return 0;
}