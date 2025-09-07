#include <stdio.h>

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key) return i;
    }
    return -1;
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

    int key;
    printf("Enter the key to find: ");
    scanf("%d", &key);

    int searchIndex = linearSearch(arr, index, key);

    if (searchIndex >= 0) printf("%d is in the index %d of the array.\n", key, searchIndex);
    else printf("%d is not found in the array.\n", key);

    return 0;
}