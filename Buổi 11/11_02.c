//https://laptrinh24h.vn/problem/fhc11b02
#include <stdio.h>
#include <math.h>

int checkFibonacci(long long n){
    long long a = 0;
    long long b = 1;
    long long c = 0;
    while(c < n){
        c = a + b;
        a = b;
        b = c;
    }
    if(c == n){
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if (checkFibonacci(a[i])){
            printf("%lld ",a[i]);
            count++;
        }
    }
    if (count == 0){
        printf("NONE\n");
    }
    return 0;
}