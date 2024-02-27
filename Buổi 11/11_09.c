//https://laptrinh24h.vn/problem/fhc11b09
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int addressMin = 0;
    int min = a[0];
    int addressMax = 0;
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] <= min){
            addressMin = i;
            min = a[i];
        }
        if (a[i] >= max){
            addressMax = i;
            max = a[i];
        }
    }
    printf("%d %d\n%d %d",max, addressMax + 1, min, addressMin + 1);
    return 0;
}