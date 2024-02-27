//https://laptrinh24h.vn/problem/fhc10b06
#include <stdio.h>
#include <math.h>

int fibonacciNumber(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacciNumber(n));
    return 0;
}