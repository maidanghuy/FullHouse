//https://laptrinh24h.vn/problem/fhc06b03
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _isPrime( long long n ) {
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( !(n & 1) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n); i+=6) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
} 
int _primeEachNumber( long long n ){
    while ( n != 0 ) {
        if ( _isPrime(n % 10) != 1 ) return 0;
        n  /= 10;
    }
    return 1;
}
int _primeSum( long long n ) {
    long long sum = 0;
    while ( n != 0 ) {
        sum += n % 10;
        n /= 10;
    }
    if ( _isPrime(sum) ) return 1;
    return 0;
}
void countPrime( long long s, long long e ) {
    int count = 0;
    for (long long i = s; i <= e; i++){
        if ( _primeEachNumber(i) && _isPrime(i) &&  _primeSum(i) ) count++;
    }
    printf("%d\n", count);
}
int main() {
    long long s, e;
    scanf("%lld %lld", &s, &e);
    countPrime(s, e);
    return 0;
}