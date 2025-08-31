#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

void pattern_01(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_02(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_03(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern_04(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pattern_05(int n){
    for(int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_06(int n){
    for(int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern_07(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            printf("  ");
        } // for spaces
        for (int j = 1; j <= 2*i - 1; j++){
            printf("* ");
        } // for stars
        printf("\n");
    }
}

void pattern_08(int n){
    for (int i = n; i > 0; i--){
        for (int j = n; j > i; j--){
            printf("  ");
        } // for spaces
        for (int j = 0; j < 2*i - 1; j++){
            printf ("* ");
        } // for stars
        printf("\n");
    }
}

void pattern_09(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            printf("  ");
        } // for spaces
        for (int j = 1; j <= 2*i - 1; j++){
            printf("* ");
        } // for stars
        printf("\n");
    } // for upper-half

    for (int i = n; i > 0; i--){
        for (int j = n; j > i; j--){
            printf("  ");
        } // for spaces
        for (int j = 0; j < 2*i - 1; j++){
            printf ("* ");
        } // for stars
        printf("\n");
    } // for lower-half
}

void pattern_10(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf ("\n");
    }
    for (int i = 1; i <= n-1; i++){
        for (int j = 1; j <= n-i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_11(int n){
    int start;
    for (int i = 1; i <= n; i++){
        if (i%2 == 0) start = 0;
        else start = 1;

        for (int j = 0; j <= i; j++){
            printf ("%d ", start);
            start = 1-start;
        }
        printf("\n");
    }
}

void pattern_12(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        for (int j = 1; j <= 2*n - 2*i; j++){
            printf("  ");
        }
        for (int j = i; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern_13(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++, count++){
            printf("%d ", count);
        }
        printf("\n");
    }
}

void pattern_14(int n){
    char ch;
    for(int i = 1; i <= n; i++){
        ch = 65;
        for (int j = 1; j <= i; j++, ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}

void pattern_15(int n){
    char ch;
    for(int i = n; i >= 1; i--){
        ch = 65;
        for (int j = 1; j <= i; j++, ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}

void pattern_16(int n){
    char ch = 65;
    for(int i = 1; i <= n; i++, ch++){
        for (int j = 1; j <= i; j++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}

void pattern_17(int n){
    char ch;
    for(int i = 1; i <= n; i++){
        for (int j = i; j < n; j++){
            printf("  ");
        }

        ch = 65;
        for (int j = 1; j <= i; j++, ch++){
            printf("%c ", ch);
        }

        ch = 65 + i - 2;
        for (int j = 1; j < i; j++, ch--){
            printf("%c ", ch);
        }

        printf("\n");
    }
}

void pattern_18(int n){
    for (int i = 5; i >= 1; i--){
        char ch = 65 + i - 1;
        for (int j = 5; j >= i; j--, ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}

void pattern_19(int n){
    for(int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        for (int j = 1; j <= 2*n - 2*i; j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        for (int j = 1; j <= 2*n - 2*i; j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_20(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        for (int j = 1; j <= 2*n - 2*i; j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        for (int j = 1; j <= 2*n - 2*i; j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_21(int n){
    for (int i = 1; i <= 2*n - 1; i++){
        for (int j = 1; j <= n; j++){
            if (i % 2 == 0) printf ("  ");
            else {
                if (i == 1 || j == 1 || j == n || i == 2*n - 1) printf ("* ");
                else printf("  ");
            }
        }
        printf("\n");
    }
}

void pattern_22(int n){
    for (int i = 1; i < 2*n; i++){
        for (int j = 1; j < 2*n; j++){
            printf("%d ", n - min(min(i, 2*n - i), min(j, 2*n - j)) + 1);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    pattern_01(n);
    // pattern_02(n);
    // pattern_03(n);
    // pattern_04(n);
    // pattern_05(n);
    // pattern_06(n);
    // pattern_07(n);
    // pattern_08(n);
    // pattern_09(n);
    // pattern_10(n);
    // pattern_11(n);
    // pattern_12(n);
    // pattern_13(n);
    // pattern_14(n);
    // pattern_15(n);
    // pattern_16(n);
    // pattern_17(n);
    // pattern_18(n);
    // pattern_19(n);
    // pattern_20(n);
    // pattern_21(n);
    // pattern_22(n);
}