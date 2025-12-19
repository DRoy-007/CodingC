#include <stdio.h>

int strLen(char s[]){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int isomorphicString(char *str1, char *str2){
    int len1 = strLen(str1), len2 = strLen(str2), k = 0, found;

    if (len1 != len2) return 0; //false

    char bucket[256][2];

    for (int i = 0; i < len1; i++){
        found = 0; 

        // bucket scan
        for (int j = 0; j < k; j++){
            if (str1[i] == bucket[j][0]){
                found = 1;
                if (str2[i] != bucket[j][1]) return 0;
                else break;
            }
            if (bucket[j][1] == str2[i] && bucket[j][0] != str1[i]) return 0;
        }

        if(!found){ 
            bucket[k][0] = str1[i];
            bucket[k][1] = str2[i];
            k++;
        }
    }
    return 1;
}

int main(){
    char* str1 = "paper";
    char* str2 = "title";

    if(isomorphicString(str1, str2) == 1) printf("Isomorphic string.\n");
    else printf("Not Isomorphic Strings.\n");

    return 0;
}