//https://laptrinh24h.vn/problem/fhc12b04
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool _check( int a[], int n){
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - 1 - i]) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    if ( _check(a, n) ) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
}
//7
// 1 2 3 4 3 2 1