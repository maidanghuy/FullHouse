//https://laptrinh24h.vn/problem/fhc10b09
#include <stdio.h>
#include <math.h>

long long GDB(long long a, long long b){
    if (b == 0) return a;
    return GDB(b, a%b);
}

int main()
{
    long long a, b;
    scanf("%lld%lld",&a, &b);
    long long UCLN = GDB(a, b);
    long long BCNN = a / GDB(a, b) * b;
    printf("%lld %lld\n",UCLN, BCNN);
    return 0;
}