//https://laptrinh24h.vn/problem/fhc12b02
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max_1 = a[0];
    int max_2 = a[1];
    for (int i = 0; i < n; i++) {
        if (a[i] > max_1) {
            max_2 = max_1;
            max_1 = a[i];
        }else if (a[i] < max_2) {
            max_2 = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if ( a[i] < max_2) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}