//https://laptrinh24h.vn/problem/fhc07b07
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _sphenicNumber( long long n ) {
    int count = 0;
    for( int i = 2; i <= sqrt(n); i++ ) {
        if ( n % i == 0){
            count++;
            int temp = 0;
            while ( n % i == 0 ){
                temp++;
                n /= i;
                if ( temp > 1 ) return 0;
            }
        }
        if ( count > 3 ) return 0;
    }
    if ( n != 1 && count == 2 ) return 1;
    return 0;
}

int main() {
    long long n;
    scanf("%lld", &n);
    if ( _sphenicNumber(n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}