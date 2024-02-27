//https://laptrinh24h.vn/problem/fhc11b03
#include <stdio.h>
#include <math.h>

long long _reverse(long long check, long long rev){
    if (!check) return rev;
    return _reverse(check / 10, rev * 10 + check % 10);
}
long long reverse(long long n){
    return _reverse(n, 0) == n;
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
        if (reverse(a[i])){
            count++;
        }
    }
    printf("%d\n",count);
    for (int i = 0; i < n; i++){
        if (reverse(a[i])){
            printf("%lld ",a[i]);
            count++;
        }
    }
    return 0;
}