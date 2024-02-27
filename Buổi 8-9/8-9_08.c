//https://laptrinh24h.vn/problem/fhc08b08
#include <stdio.h>
#include <math.h>

int _analysisPrime( int n ) {
    int res;
    for (int i = 2; i <= sqrt(n); i++) {
        if ( !(n % i) ){
            res = i;
            while ( !(n % i) ) {
                n /= i;
            }
        }
    }
    if ( n != 1 ) return n;
    return res;
}

int main(){
    int t;
    scanf("%d", &t);
    int n;
    while(t--) {
        scanf("%d", &n);
        printf("%d\n", _analysisPrime(n));
    }
    return 0;
}