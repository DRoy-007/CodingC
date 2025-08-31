#include <stdio.h>

int* hashCreation(int arr[], int hashArr[], int n){
    for (int i = 0; i < n; i++){
        hashArr[arr[i]]++;
    }
    return hashArr[1002];
}

int frequency(int hashArr[], int query){
    if(query <= 1000) return hashArr[query];
    else return -1; // no such elemnt is present
}

int main(){
    int index;
    printf("Enter the size of array: ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter the elements of the array (<1000 and >= 0): ");
    for (int i = 0; i < index; i++) {
        scanf("%d", &arr[i]);
    }

    int hashArr[1002] = {0}; // hash array defined in main
    hashCreation(arr, index, hashArr);

    int query;
    printf("Enter the element whose frequency you want: ");
    scanf("%d", &query);

    int freq = frequency(hashArr, query);
    if (freq != -1) printf("Frequency of %d is: %d\n", query, freq);
    else printf("Element %d is out of range!\n", query);

    return 0;
}