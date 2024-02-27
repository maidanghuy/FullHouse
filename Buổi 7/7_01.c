//https://laptrinh24h.vn/problem/fhc07b01
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int GDB(int a, int b) {
    if ( b == 0 ) return a;
    return GDB(b, a % b);
}

int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    for ( int i = s; i <= e; i++ ) {
        for ( int j = i + 1; j <= e; j++ ) {
            if ( GDB(i, j) == 1 ) {
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}