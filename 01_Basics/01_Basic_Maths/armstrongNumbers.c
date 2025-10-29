#include <stdio.h>

int power(int base, int power){
    if (power == 0) return 1;
    if (base == 0) return 0;
    if (base == 1) return 1;

    long long modifiedBase = base;
    int ans = 1;
    while(power > 0){
        if (power % 2 == 1) ans *= modifiedBase;
        modifiedBase *= modifiedBase;
        power /= 2;
    }
    return ans;
}

int countDigits(int n){
    int count;
    if (n == 0) return 1;
    if (n < 0) n = -n;
    
    while(n>0){
        n /= 10;
        count++;
    }

    return count;
}

int isAmstrongNumber(int n){
    int num = n;
    int totalDigits = countDigits(num);
    int armNum = 0;
        
    while(num != 0){
        armNum += Pow((num % 10), totalDigits);
        num /= 10;
    }
        
    if (n == armNum) return 1;
    else return 0;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrongNumber(n)) printf("It is an Armstrong Number.\n");
    else printf("It is not an Armstrong Number.\n");

    return 0;
}
