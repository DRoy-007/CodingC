#include <stdio.h>

int strLen(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int reverseWordsInString(char s[]){
    int end = strLen(s), start = end;

    for(int i = end - 1; i >= 0; i--){
        if (s[i] == ' ' && start < end){
            printf("%.*s ", end - start, s + start);
            end = i;
        }

        else if (s[i] == ' ') {
            end--;
        }

        else {
            start = i;
        }
    }

    printf("\n");
}

int main(){
    char s[] = " amazing coding skills ";
    reverseWordsInString(s);

    return 0;
}