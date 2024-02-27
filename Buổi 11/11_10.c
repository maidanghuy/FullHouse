//https://laptrinh24h.vn/problem/fhc11b10
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
    int max_1 = a[0];
    int max_2 = a[1];
    int addressMax_1 = 0;
    for (int i = 1; i < n; i++){
        if (a[i] > max_1){
            max_2 = max_1;
            max_1 = a[i];
        }else if ( a[i] > max_2 ) {
            max_2 = a[i];
        }
    }
    printf("%d %d",max_1, max_2);
    return 0;
}