//https://laptrinh24h.vn/problem/fhc11b08
#include <stdio.h>
#include <math.h>

int GCD(int a, int b){
    if (b == 0) return a;
    return GCD(b, a%b);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for (int i = 0; i < n; i++){
        if (GCD(a[i], x) == 1){
            count++;
        }
    }
    printf("%d\n",count);
    for (int i = 0; i < n; i++){
        if (GCD(a[i], x) == 1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}