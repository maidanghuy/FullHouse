//https://laptrinh24h.vn/problem/uocso01
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

long long powMod(long long a, long long b) {
    long long res = 1;
    while(b) {
        if ( b % 2 == 1 ) {
            res *= a;
        }
        a *= a;
        b /= 2;
    }
    return res;
}
void bai3(long long n){
    long long total = 0;
    long long soChuSo = log10(n) + 1;
    
    while( n != 0){
        long long x = n % 10;
        total = total + powMod(x, soChuSo);
        n /= 10;
    }
    printf("%lld\n", total);
}

int main() {
    long long n;
    scanf("%lld", &n);
    bai3(n);
    return 0;
}