#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long res = 0;
    res = 1ll*n*(n+1);
    printf("%lld\n", res);
}