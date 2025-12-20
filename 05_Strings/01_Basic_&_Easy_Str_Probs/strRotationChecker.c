#include <stdio.h>
#include <string.h>

int strLen(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

char* strCat(char* dest, const char* src){
    char* start = dest;

    while(*dest != '\0') dest++;

    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return start;
}

int strRotationChecker(char* str1, char* str2, int len1, int len2){
    if (len1 != len2) return 0;

    char* addedStr = strCat(str1, str1);

    for (int i = 0; i < len1; i++){
        if(strncmp(addedStr + i, str2, len1) == 0) return 1;
    }

    return 0;
}

int main(){
    char str1[50] = "rotation", str2 = "tionrota";
    int len1 = strLen(str1), len2 = strLen(str2);

    if(strRotationChecker(str1, str2, len1, len2)) printf("true\n");
    else printf("false\n");

    return 0;
}