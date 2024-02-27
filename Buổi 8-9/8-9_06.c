//https://laptrinh24h.vn/problem/fhc08b06
#include <stdio.h>
#include <math.h>

int _squareNumber( long long n ) {
    return sqrt(n) == (int)sqrt(n);
}  

int main(){
    long long n;
    scanf("%lld", &n);
    if ( _squareNumber(n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}