//https://laptrinh24h.vn/problem/fhc01b03
#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    double range = sqrt( pow ( x1 - x2, 2) + pow ( y1 - y2, 2));
    printf("%.2f\n", range);
    return 0;
}