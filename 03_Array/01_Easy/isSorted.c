#include <stdio.h>

int isSorted(int arr[], int n){

    for (int i = 1; i < n; i++){
        if (arr[i - 1] > arr[i]) return 0;
    }
    return 1;
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

    if(isSorted(arr, index)) printf("The array is sorted.\n");
    else printf("The array is not sorted.\n");
}