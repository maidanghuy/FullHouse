#include <stdio.h>

struct phanSo{
    long long tuSo, mauSo;
};
typedef struct phanSo pS;

long long gcd(long long x, long long y){
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main(){
    pS ps;
    scanf("%lld %lld", &ps.tuSo, &ps.mauSo);
    long long GCD = gcd(ps.tuSo, ps.mauSo);

    ps.tuSo /= GCD;
    ps.mauSo /= GCD;

    printf("%lld/%lld", ps.tuSo, ps.mauSo);
    return 0;
}