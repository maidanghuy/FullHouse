//https://laptrinh24h.vn/problem/fhc02b19
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int up, down, step;
    scanf("%d %d %d", &up, &down, &step);
    int result;
    if ( step&1 ){
        result = up + step / 2 * abs(up - down);
    }else {
        result = step / 2 * abs(up - down);
    }
    printf("%d\n", result);
}