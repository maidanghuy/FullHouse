//https://laptrinh24h.vn/problem/fhc03b14
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void _primeNumber( int n, int countTwo, int countThree) {
    if ( !(n&1) ) {
        countTwo = n / 2;
        printf("%d\n", countTwo);
        for(int i = 0; i < countTwo; i++) {
            printf("2 ");
        }
    }else {
        countTwo = (n - 3) / 2;
        countThree = 1;
        printf("%d\n", countTwo + countThree);
        for(int i = 0; i < countTwo; i++) {
            printf("2 ");
        }
        printf("3 ");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int countTwo;
    int countThree;
    _primeNumber(n, countTwo, countThree);
    return 0;
}