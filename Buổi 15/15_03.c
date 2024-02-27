//https://laptrinh24h.vn/problem/fhc15b03
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

long long prime[1000001];

int _prime (int n) {
    if (n < 2) return 0;
    if (n < 4) return 1;
    if ( !(n % 2) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

void sinh_prime(){
    int index = 0;
    for (int i = 0; i < 1000001; i++) {
        if (_prime(i)) {
            prime[index++] = i;
        }
    }
}
// int main() {
//     int n;
//     scanf("%d", &n);

//     sinh_prime();
//     long long a[n][n];
//     int index = 0;

//     int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
//     while ( h1 <= h2 && c1 <= c2 ) {

//         for (int i = c1; i <= c2; i++) {
//             a[h1][i] = prime[index++];
//         }
//         h1++;

//         for (int i = h1; i <= h2; i++) {
//             a[i][c2] = prime[index++];
//         }
//         c2--;
        
//         if ( h1 < h2) {
//             for (int i = c2; i >= c1; i--) {
//                 a[h2][i] = prime[index++];
//             }
//             h2--;
//         }

//         if ( c1 < c2 ) {
//             for (int i = h2; i >= h1; i--) {
//                 a[i][c1] = prime[index++];
//             }
//             c1++;
//         }
//     }
    
//     for (int i = 0; i < n; i++ ) {
//         for (int j = 0; j < n; j++) {
//             printf("%lld ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


int main() {
    int n;
    scanf("%d", &n);

    sinh_prime();
    long long a[n][n];
    int index = 0;

    for (int i = 0; i <= n / 2; i++) {
        
        for (int j = i; j <= n - i - 1; j++) a[i][j] = prime[index++];

        for (int j = i + 1; j <= n - i - 1; j++) a[j][n - i - 1] = prime[index++];

        for (int j = n - i - 2; j >= i; j--) a[n - i - 1][j] = prime[index++];

        for (int j = n - i - 2; j >= i + 1; j--) a[j][i] = prime[index++];
    }


    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}