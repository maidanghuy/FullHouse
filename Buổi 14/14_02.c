//https://laptrinh24h.vn/problem/fhc14b02
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

bool _prime(long long n) {
    if (n < 2) return false;

    if (n < 4) return true;

    if ( (n % 2 == 0) || (n % 3 == 0) ) return false;

    for (int i = 5; i <= sqrt(n); i += 6) {

        if ( n % i == 0  || n % (i + 2) == 0) return false;

    }

    return true;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long a[n][m];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            scanf("%lld", &a[i][j]);
        }

    }
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            if (_prime(a[i][j])) {
                printf("%lld ", a[i][j]);
            }
        }

        printf("\n");
    }
}