//https://laptrinh24h.vn/problem/fhc10b09
#include <stdio.h>
#include <math.h>

long long sumNumber(long long n){
    if (n < 10) return n;
    return n % 10 + sumNumber(n / 10);
}

int main()
{
    long long n;
    scanf("%lld",&n);
    printf("%lld",sumNumber(n));
    return 0;
}