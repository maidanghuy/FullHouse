//https://laptrinh24h.vn/problem/fhc06b12
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _luckyNumber( int n ) {
    while ( n != 0 ) {
        int temp = n  % 10;
        if ( temp == 6 ) {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int _reverse( int n ) {
    int res = n;
    int temp = 0;
    int sum = 0;
    while ( n != 0 ) {
        temp = temp * 10 + n % 10;
        sum += n % 10;
        n /= 10;
    }
    if ( temp == res && sum % 10 == 8 ) return 1;
    return 0;
}
void specialNumber( int s, int e ) {
    int count = 0;
    for( int i = s; i <= e; i++ ) {
        if ( _reverse(i) && _luckyNumber(i) ) {
            printf("%d ", i);
            count ++;
        }
    }
    if (count == 0) {
        printf("-1");
    }
}
int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    specialNumber(s, e);
    return 0;
}