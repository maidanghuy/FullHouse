//https://laptrinh24h.vn/problem/fhc10b12
#include <stdio.h>
#include <math.h>

long long countNumber(long long n){
    if (n < 10) return 1;
    return 1 + countNumber(n / 10);
}
int main()
{
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",countNumber(n));
    return 0;
}