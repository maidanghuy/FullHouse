//https://laptrinh24h.vn/problem/sum3
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int main() {
    char str[1999999];
    fgets(str, 1999999, stdin);

    int len = strlen(str);
    long long total = 0;
    for (int i = 0; i < len - 1; i++){
        long long x = str[i] - '0';
        total = total + 1ll * pow(x, 3);
    }
    printf("%lld\n", total);
    return 0;
}