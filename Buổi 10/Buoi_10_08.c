//https://laptrinh24h.vn/problem/fhc10b08
#include <stdio.h>
#include <math.h>

float sumNumber (int n){
    if (n == 1) return 1;
    return 1.0 * 1/n + sumNumber(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%.3f\n",sumNumber(n));
    return 0;
}