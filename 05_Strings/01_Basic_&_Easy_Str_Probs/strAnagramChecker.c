#include <stdio.h>

int strLen(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int strAnagramChecker(char* str1, char* str2){
    int len1 = strLen(str1), len2 = strLen(str2);

    if (len1 != len2) return 0;

    int freq[26] = {0};

    for (int i = 0; i < len1; i++){
        freq[str1[i] - 'A']++;
        freq[str2[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++){
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main(){
    char* str1 = "CAB", str2 = "BCA";

    if (strAnagramChecker(str1, str2)) printf("true\n");
    else printf("false\n");

    return 0;
}