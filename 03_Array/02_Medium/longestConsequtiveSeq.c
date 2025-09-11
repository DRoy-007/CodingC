#include <stdio.h>
#define MAX 1000000
#define max(a, b) ((a > b) ? a : b)

int longestConsequtiveSeq(int arr[], int n){
    if(n == 0) return 0;

    int hashArr[MAX+1] = {0};
    int maxLen = 0, len;

    for (int i = 0; i < n; i++){
        hashArr[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        // check if arr[i] is the start of a sequence
        if (arr[i] == 0 || hashArr[arr[i] - 1] == 0) {
            int curr = arr[i];
            int len = 1;

            // expand forward
            while (curr + 1 <= MAX && hashArr[curr + 1]) {
                curr++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (>= 0 and <= 10^6): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The length of the longest consequtive sequence in this array is: %d\n", longestConsequtiveSeq(arr, n));

    return 0;
}