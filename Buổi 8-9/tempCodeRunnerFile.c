//https://laptrinh24h.vn/problem/fhc08b09
#include <stdio.h>
#include <math.h>

int main(){
    long long s, e;
    scanf("%lld %lld", &s, &e);
    for (long long i = ceil(sqrt(s)); i <= sqrt(e); i++) {
        printf("%lld ", i * i);
    }
    return 0;
}