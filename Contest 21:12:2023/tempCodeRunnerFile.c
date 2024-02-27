//https://laptrinh24h.vn/problem/sumarr
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    long long max = 0;
    long long min;
    long long sum = 0;
    double avg = 0.0;

    for (int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        if (a[i] > max) max = a[i];
        sum += a[i];
        avg += 1.0 * a[i] / n;
    }

    min = max;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
    }

    printf("%lld\n", sum);
    printf("%0.f\n", avg);
    printf("%lld\n", max);
    printf("%lld\n", min);
    return 0;
}