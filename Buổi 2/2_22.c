//https://laptrinh24h.vn/problem/fhc02b21
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[6] = {1, 5, 10, 20, 100};
    int index = 4;
    int result = 0;
    while(n != 0) {
        result += n / a[index];
        n = n % a[index];
        index--;
    }
    printf("%d\n", result);
}