#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrReverser(int arr[], int start, int end){
    while (start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n){
    int breakIndex = -1;

    for (int i = n - 2; i >= 0; i--){
        if (arr[i] < arr[i + 1]){
            breakIndex = i;
            break;
        }
    }

    if (breakIndex == -1){
        arrReverser(arr, 0, n-1);
        return;
    }

    int index = n - 1;
    while (arr[index] <= arr[breakIndex]) {
        index--;
    }
    swap(&arr[breakIndex], &arr[index]);

    arrReverser(arr, breakIndex+1, n-1);
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    nextPermutation(arr, n);

    printf("The next permutation of the given array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}