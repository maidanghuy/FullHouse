//https://laptrinh24h.vn/problem/fhc11b11
#include <stdio.h>
#include <math.h>
int checkNumber(int n){
    if (n < 0) return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++){
        if ( checkNumber(a[i - 1]) != checkNumber(a[i]) || checkNumber(a[i + 1]) != checkNumber(a[i])) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}