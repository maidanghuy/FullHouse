//https://laptrinh24h.vn/problem/fhc11b05
#include <stdio.h>
#include <math.h>

int checkOddorEven (int n){
    if (n % 2 == 0) return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
        sum += a[i];
    }
    
    float avg = 1.0 * sum / n;
    printf("%.2f", avg);
    return 0;
}