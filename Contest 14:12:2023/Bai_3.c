//https://laptrinh24h.vn/problem/uocso01
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int main() {
    int n;
    scanf("%d", &n);


    int max = sqrt(n);
    int a[max];
    int len = 0;

    for (int i = 1; i <= max; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (n / i != i){
                a[len] = n / i;
                len++;
            }
        }
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    return 0;
}