//https://laptrinh24h.vn/problem/fhc02b16
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int d;
    scanf("%d", &d);
    int y = d / 365;
    int w = (d - y * 365) / 7;
    d -= (y * 365 + w * 7);
    printf("%d %d %d\n", y, w, d);
}