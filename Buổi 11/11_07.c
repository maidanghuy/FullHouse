//https://laptrinh24h.vn/problem/fhc11b07
#include <stdio.h>
#include <math.h>

int countAppear(long long n, long long x){
    return n == x;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }
    long long x;
    scanf("%lld",&x);
    for (int i = 0; i < n; i++){
        if (countAppear(a[i], x)){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}