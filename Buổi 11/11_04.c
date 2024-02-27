//https://laptrinh24h.vn/problem/fhc11b04
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
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }
    int countOdd = 0;
    int countEven = 0;
    for (int i = 0; i < n; i++){
        if (checkOddorEven(a[i])){
            countEven++;
        }else {
            countOdd++;
        }
    }
    printf("%d\n%d",countEven, countOdd);
    return 0;
}