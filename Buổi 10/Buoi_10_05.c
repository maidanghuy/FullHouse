//https://laptrinh24h.vn/problem/fhc10b05
#include <stdio.h>
#include <math.h>

long long factorialNumber(int n){
    if ( n == 1 ) return 1;
    return 1ll * n * factorialNumber(n - 1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",factorialNumber(n));
    return 0;
}