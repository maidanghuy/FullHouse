//https://laptrinh24h.vn/problem/fhc03b08
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Cách 1:
// int main() {
//     int n;
//     scanf("%d", &n);
//     long long sum = 1;
//     for (int i = 2; i <= n; i++) {
//         sum *= i;
//     }
//     printf("%lld\n", sum);
//     return 0;
// }

//Cách 2:
int main() {
    int n;
    scanf("%d", &n);
    long long sum = 1;
    long long count = 0;
    for( int i = 2; i <= n; i++) {
        int temp = i;
        if ( !(temp&1) ) {
            while ( !(temp&1) ) {
                count++;
                temp /= 2;
            }
        }
        sum *= temp;
    }
    printf("%lld\n", sum << count);
    return 0;
}