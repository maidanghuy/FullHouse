// //https://laptrinh24h.vn/problem/fhc11b15
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, x, index;
//     scanf("%d %d %d",&n, &x, &index);
//     int a[n + 1];
//     for (int i = 0; i < n; i++){
//         scanf("%d",&a[i]);
//     }
//     for (int i = n + 1 ; i >= index; i--){
//         a[i] = a[i - 1];
//     }
//     a[index - 1] = x;
//     for (int i = 0; i < n + 1; i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int scp(long long n) {
    int x = sqrt(n);
    return 1ll * x * x == n;
}

void ktra(long long a[], int n) {
    int demSoChinhPhuong = 0;
    
    for (int i = 0; i < n; i++) {
        if (scp(a[i])) {
            demSoChinhPhuong++;
        }
    }
    printf("%d\n",demSoChinhPhuong);
    for (int i = 0; i < n; i++) {
        if (scp(a[i])) {
            printf("%lld ", a[i]);
        }
    }
}

int main() {
    int n;
    long long a[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    ktra(a, n);
    return 0;
}