//https://laptrinh24h.vn/problem/fhc08b01
#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    for (int i = ceil(sqrt(a)); i <= sqrt(b); i++) {
        printf("%lld ", 1ll * i * i);
    }
    return 0;
}