//https://laptrinh24h.vn/problem/fhc10b02
#include <stdio.h>
#include <math.h>

int sumNumber(int n){
    if (n == 1) return 1;
    return n * n+ sumNumber(n - 1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",sumNumber(n));
    return 0;
}