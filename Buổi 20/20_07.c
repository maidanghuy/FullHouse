//https://laptrinh24h.vn/problem/fhc20b07
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool _primeNumber(int n){
    if (n < 2) return false;
    if (n < 4) return true;
    if ( n % 2 == 0  || n % 3 == 0) return false;

    for (int i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int main(){
    char s[1000];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (!_primeNumber(s[i] - 48)){
            printf("NO\n");
            return 0;
        }
        sum += s[i] - 48;
    }

    if (_primeNumber(sum)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}