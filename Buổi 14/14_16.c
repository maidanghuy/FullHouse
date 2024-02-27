//https://laptrinh24h.vn/problem/fhc14b15
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void input(int a[1000][1000], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

int _prime (int n) {
    if (n < 2) return 0;
    if (n < 4) return 1;
    if ( !(n % 2) || !(n % 3) ) return 0;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if ( !(n % i) || !(n % (i + 2)) ) return 0;
    }
    return 1;
}

int main() {

    int n;
    scanf("%d", &n);
    
    int a[1000][1000];
    input(a, n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (j >= i) {
                if (_prime(a[i][j])) sum += a[i][j];
            }
        }
    }
    printf("%lld\n", sum);
    return 0;
}