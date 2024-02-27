//https://laptrinh24h.vn/problem/sumsn
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int main() {
    int n;
    scanf("%d", &n);
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    printf("%lld\n", res);
    return 0;
}