#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN (-2147483648)

int secondSmallest(int arr[], int n){
    if (n < 2) return -1;

    int secondSmall = INT_MAX;
    int small = INT_MAX;

    for (int i = 0; i < n; i++){
        if (arr[i] < small){
            secondSmall = small;
            small = arr[i];
        }

        else if (arr[i] < secondSmall && arr[i] != small){
            secondSmall = arr[i];
        }
    }

    return secondSmall;
}

int secondLargest(int arr[], int n){
    if (n < 2) return -1;

    int secondLarge = INT_MIN;
    int large = INT_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > large){
            secondLarge = large;
            large = arr[i];
        }

        else if (arr[i] > secondLarge && arr[i] != large){
            secondLarge = arr[i];
        }
    }

    return secondLarge;
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

    int sS = secondSmallest(arr, index);
    int sL = secondLargest(arr, index);

    if (sS == -1) printf("Second smallest doesn\'t exist.\n");
    else printf("Second smallest element is %d.\n", sS);

    if (sL == -1) printf("Second largest doesn\'t exist.\n");
    else printf("Second largest element is %d.\n", sL);

    return 0;
}