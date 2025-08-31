#include <stdio.h>

int reverseANumber(int num){
    int n = num;
    if (n == 0) return 1;
    if (n < 0) n = -n;
    int rev_num = 0, digit;
    
    while(n > 0){
        digit = n % 10;
        rev_num = rev_num * 10 + digit;
        n /= 10;
    }

    return rev_num;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number in reverse is: %d\n", reverse_Number(n));

    return 0;
}