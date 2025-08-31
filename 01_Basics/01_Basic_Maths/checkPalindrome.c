#include <stdio.h>

int checkPalindrome(int num){
    int n = num;
    int rev_num = 0, digit;
    if (n == 0) return 1; // true
    if (n < 0) n =  -n;

    while(n>0){
        digit = n%10;
        rev_num = rev_num*10 + digit;
        n /= 10;
    }

    if (num == rev_num) return 1;
    else return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (check_Palindrome(n)) printf("It is a plaindrome number.\n");
    else printf ("It is not a palindrome number.\n");

    return 0;
}