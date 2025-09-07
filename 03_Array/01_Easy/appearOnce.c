#include <stdio.h>

int appearOnce(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }
    return ans;
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

    printf("The single one is: %d\n", appearOnce(arr, index));

    return 0;
}