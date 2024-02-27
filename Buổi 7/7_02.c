//https://laptrinh24h.vn/problem/fhc07b02
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _countNumber( int n ) {
    if ( n < 10 ) return 1;
    return 1 + _countNumber( n / 10);
} 

int armstrongNumber( int n) {
    int count = _countNumber(n);
    int temp = n;
    int sum = 0;
    while( n != 0 ) {
        sum += pow(n % 10, count);
        n /= 10;
    }
    return temp == sum;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        if ( armstrongNumber(i) ) {
            printf("%d ", i);
        }
    }
    return 0;
}