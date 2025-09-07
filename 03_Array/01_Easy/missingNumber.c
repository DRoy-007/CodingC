#include <stdio.h>

int missingNumber(int arr[], int size){
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= size+1; i++){
        xor1 ^= i;
    }
    for (int i = 0; i < size; i++){
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}

int main(){
    int arr[] = {1, 2, 3, 5};

    printf("The missing number is: %d\n", missingNumber(arr, sizeof(arr)/sizeof(int)));

    return 0;
}