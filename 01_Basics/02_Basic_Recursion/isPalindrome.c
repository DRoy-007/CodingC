#include <stdio.h>

int isPalindrome(char s[], int i) {
    int len = strlen(s);

    if (i >= len / 2) return 1; // Base case

    if (s[i] != s[len - i - 1]) return 0; // Mismatch found

    return is_str_palindrome(s, i + 1); // Recursive check
}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (is_str_palindrome(str, 0)) printf("Palidrome\n");
    else printf("Not Palindrome\n");
}