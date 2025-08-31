#include <stdio.h>

int countDigits(int n){
    int count;
    if (n == 0) return 1;
    if (n < 0) n = -n;
    
    while(n>0){
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number of digits are: %d\n", count_Digits(n));

    return 0;
}