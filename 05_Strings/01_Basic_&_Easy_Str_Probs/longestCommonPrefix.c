#include <stdio.h>
#include <string.h>

#define MIN(a, b) ((a < b) ? a : b)

void sort(char *arr[], int n){
    char *temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (strcmp(arr[j], arr[j + 1]) > 0){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void longestCommonPrefix(char *arr[], int n){
    if (n == 0){
        printf("");
        return;
    }

    sort(arr, n);

    char *first = arr[0];
    char *last  = arr[n - 1];

    int minLength = MIN(strlen(first), strlen(last));

    int i;
    for (i = 0; i < minLength; i++){
        if (first[i] != last[i])
            break;
    }

    // Print prefix
    for (int j = 0; j < i; j++){
        putchar(first[j]);
    }
}

int main(){
    char *arr[] = {
        "banana",
        "apple",
        "grape",
        "cherry",
        "mango"
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    longestCommonPrefix(arr, n);

    return 0;
}
