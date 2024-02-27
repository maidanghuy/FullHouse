//https://laptrinh24h.vn/problem/fhc08b12
#include <stdio.h>
#include <math.h>

int _prime( int n ){
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( !(n & 1) || !(n % 3) ) return 0;
    for ( int i = 5; i <= sqrt(n); i+=6 ) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

int _fibonacci( int n ) {
    long long sum = 0;
    long long sum_1 = 0;
    long long sum_2 = 1;
    while ( sum < n ) {
        sum = sum_1 + sum_2;
        sum_1 = sum_2;
        sum_2 = sum;
    }
    return sum == n;
}

int _sumNumber( int n ) {
    int sum = 0;
    while ( n != 0 ) {
        sum += n % 10;
        n /= 10;
    } 
    return sum;
}

void sumPrime( int n ) {
    for (int i = 2; i <= n; i++) {
        if ( _prime(i) && _fibonacci(_sumNumber(i)) ) {
            printf("%d ", i);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    sumPrime(n);
    return 0;
}