//https://laptrinh24h.vn/problem/fhc11b13
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] < min) min = a[i];
    }
    while (1){
        int count = 0;
        for (int i = 0; i < n; i++){
            if (a[i] % min != 0){
                break;
            }else {
                count++;
            }
        }
        if ( count == n ){
            printf ("%d\n",min);
            break;
        }else {
            min--;
        }
    }
    return 0;
}