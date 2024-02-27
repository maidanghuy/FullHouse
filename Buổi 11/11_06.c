//https://laptrinh24h.vn/problem/fhc11b06
#include <stdio.h>
#include <math.h>

int checkSquareNumber(long long n){
    return sqrt(n) == (int)sqrt(n);
}

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
        if (checkSquareNumber(a[i])){
            count++;
        }
    }
    printf("%d\n",count);
    for (int i = 0; i < n; i++){
        if (checkSquareNumber(a[i])){
            printf("%lld ",a[i]);
        }
    }
    return 0;
}