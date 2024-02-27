//https://laptrinh24h.vn/problem/fhc02b04
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkyear(int y) {
    if ( y % 4 == 0 && y % 100 != 0 || y % 400 == 0 ) return 1;
    return 0;
}

int main() {
    int m, y;
    scanf("%d %d", &m, &y);
    if ( m < 1 || m > 12 || y < 0) {
        printf("INVALID\n");
    }else if (checkyear(y)){
        switch (m) {
        case 2:
            printf("29\n");
            break;
        case 4:
            printf("30\n");
            break;
        case 6:
            printf("30\n");
            break;
        case 9:
            printf("30\n");
            break;
        case 11:
            printf("30\n");
            break;
        default:
            printf("31\n");
            break;
        }
    }else {
        switch (m) {
        case 2:
            printf("28\n");
            break;
        case 4:
            printf("30\n");
            break;
        case 6:
            printf("30\n");
            break;
        case 9:
            printf("30\n");
            break;
        case 11:
            printf("30\n");
            break;
        default:
            printf("31\n");
            break;
        }
    }
    return 0;
}