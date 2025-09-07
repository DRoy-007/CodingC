#include <stdio.h>

int moveZeroesToEnd(int arr[], int n){
    int j = -1, temp;

    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            j = i;
            break;
        }
    }

    if (j == -1) return -1;

    for (int i = j + 1; i < n; i++){
        if (arr[i] != 0){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;

            j++;
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

    if (moveZeroesToEnd(arr, index) >= 0){
        printf("The new array: ");
        for (int i = 0; i < index; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else printf("No zeroes are present.\n");

    return 0;
}