#include <stdio.h>

int swap(int* a, int* b){
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseAnArray(int arr[], int start, int end){
    if (start < end){
        swap(&arr[start], &arr[end]);
        reverseAnArray(arr, start + 1, end - 1);
    }
}

int main(){
    int n;
    printf("enter index number: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter integers for an array of size %d\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    reverseAnArray(arr, 0, n-1); 
    printArray(arr, n);

    return 0;
}