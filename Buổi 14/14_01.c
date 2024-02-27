// //https://laptrinh24h.vn/problem/fhc14b01
// # include <stdio.h>
// # include <math.h> 
// # include <stdbool.h>
// # include <string.h>

// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n][m];
//     for (int i = 0; i < n; i++) {

//         for (int j = 0; j < m; j++) {
//             scanf("%d", &a[i][j]);
//         }

//     }

//     for (int i = 0; i < n; i++) {

//         long long sum = 0;

//         for (int j = 0; j < m; j++) {
//             sum += a[i][j];
//         }

//         printf("%lld ", sum);

//     }

//     printf("\n");

//     for (int i = 0; i < m; i++) {

//         long long sum = 0;
//         for (int j = 0; j < n; j++) {
//             sum += a[j][i];
//         }

//         printf("%lld ", sum);
//     }

// }

// Cách 2: 
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }

    }

    long long sum_hang[201] = {0};
    long long sum_cot[201] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum_hang[i] += a[i][j];
            sum_cot[j] += a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%lld ", sum_hang[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        printf("%lld ", sum_cot[i]);
    }

}