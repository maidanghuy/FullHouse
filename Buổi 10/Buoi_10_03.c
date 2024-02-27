//https://laptrinh24h.vn/problem/fhc10b03
#include <stdio.h>
#include <math.h>

long long sumNumber(long long n){
    if (n == 1) return 1;
    return n * n * n + sumNumber(n - 1);
}

int main()
{
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",sumNumber(n));
    return 0;
}