//https://laptrinh24h.vn/problem/fhc11b01
#include <stdio.h>
#include <math.h>

int primeNumber (int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if (primeNumber(a[i])){
            count++;
        }
    }
    if (count == 0){
        printf("NONE\n");
    }else {
        printf("%d\n",count);
    }
    return 0;
}