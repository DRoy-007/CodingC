#include <stdio.h>
#include <stdlib.h>

int strLen(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

char* removeOutermostParentheses(char s[]){
    int level = 0;
    int len = strLen(s);

    char* sol = (char*)malloc(len + 1);
    int k = 0;

    for (int i = 0; i < len; i++){
        if (s[i] == '('){
            if (level > 0) sol[k++] = s[i];
            level++;
        }
        else if (s[i] == ')'){
            level--;
            if (level > 0) sol[k++] = s[i];
        }
    }

    sol[k] = '\0';
    return sol;
}

int main(){
    char s[] = "()(()())(())";

    char* sol = removeOutermostParentheses(s);

    printf("The result is: %s\n", sol);

    free(sol);
    return 0;
}