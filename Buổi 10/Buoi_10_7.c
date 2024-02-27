//https://laptrinh24h.vn/problem/fhc10b07
#include <stdio.h>
#include <math.h>

int combination(int n){
    if (n == 1) return 1;
    return n * combination(n - 1);
}

int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    printf("%d\n",combination(n) / (combination(k) * combination(n - k)));
    return 0;
}