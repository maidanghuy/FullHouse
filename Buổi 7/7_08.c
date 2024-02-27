//https://laptrinh24h.vn/problem/fhc07b08
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _noprimeNumber( int n ) {
    for ( int i = 2; i <= sqrt(n); i++ ){
        if (n % i == 0) return 1;
    }
    return 1;
}
int _sumNumber( int n ){
    int sum = 0;
    while ( n != 0 ) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int smithNumber( int n ){
    int sumN = _sumNumber(n);
    int temp = _noprimeNumber(n);
    int sum = 0;
    for ( int i = 2; i <= sqrt(n); i++ ) {
        if ( n % i == 0 ) {
            while ( n % i == 0 ) {
                sum += _sumNumber(i);
                n /= i;
            }
        }
    }
    if ( n != 1 ) sum += _sumNumber(n);
    if ( temp && sumN == sum) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if ( smithNumber(n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}