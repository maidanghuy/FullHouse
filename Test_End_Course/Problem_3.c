#include <stdio.h>

int fiboN (int n){
    if (n==1) return 0;
    if (n==2) return 1;
    return fiboN(n-1)+fiboN(n-2);
}

int main(){
    int n;
    scanf("%d", &n);

    long long res = fiboN(n);
    printf("%lld", res);
    return 0;
}