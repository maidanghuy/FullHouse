//https://laptrinh24h.vn/problem/fhc12b03
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Cách 1: giới hạn 10^6
// int main() {
//     int n;
//     scanf("%d", &n);
//     int prime[n + 1];
//     for (int i = 0; i <= n; i++) {
//         prime[i] = 0;
//     }
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (!prime[i]) {
//             for (int j = i * i; j <= n; j += i) {
//                 prime[j] = 1;
//             } 
//         }
//     }
//     for (int i = 2; i <= n; i++) {
//         if (!prime[i]) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

//Cách 2: giới hạn chưa biết
int main() {
    int n;
    scanf("%d", &n);
    bool prime[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = true;
            } 
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}