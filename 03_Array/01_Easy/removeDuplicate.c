#include <stdio.h>

int removeDuplicate(int arr[], int n){
    int i = 0, temp;
    for (int j = 1; j < n; j++){
        if (arr[j] != arr[i]){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return i+1;
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

    int k = removeDuplicate(arr, index);

    printf("The unique elements in the array are: ");
    for (int i = 0; i < k; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}