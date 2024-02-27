//https://laptrinh24h.vn/problem/fhc07b10
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _giaithua( int n ){
    if ( n == 1 || n == 0 ) return 1;
    return n * _giaithua(n - 1);
}

int _strongNumber( int n ){
    int temp = n;
    int sum = 0;
    while ( n != 0 ) {
        sum += _giaithua(n % 10);
        n /= 10;
    }
    return sum == temp;
}

void strongNumber( int s, int e ) {
    int count = 0;
    for ( int i = s; i <= e; i++ ) {
        if ( _strongNumber(i) ) {
            printf("%d ", i);
            count++;
        }
    }
    if ( count == 0 ) {
        printf("0");
    }
} 

int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    strongNumber(s, e);
    return 0;
}