#include <stdio.h>

int strLen(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void largestOddInStr(char s[]){
    int start = 0, end = strLen(s);
    for (int i = end - 1; i >= 0; i--){
        if ((s[i] - '0')%2 != 0){
            end = i+1;
            break;
        }
    }
    for (int i = 0; i < end; i++){
        if (s[i] == '0') start++;
    }

    printf("Largest odd number is: %.*s\n", end - start, s + start);
}

int main(){
    char s[] = "53476";
    largestOddInStr(s);

    return 0;
}