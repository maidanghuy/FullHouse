//https://laptrinh24h.vn/problem/fhc07b04
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int _perfectNumber( int n ) {
    if ( n <= 1 ) return 0;
    int sum = 1;
    for( int i = 2; i <= sqrt(n); i++ ) {
        if ( n % i == 0 ) {
            sum += i;
            if ( n / i != i ) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}
void perfectNumber( int s, int e ) {
    if ( s > e ){
        int temp = s;
        s = e;
        e = temp;
    }
    int count = 0;
    for( int i = s; i <= e; i++ ) {
        if ( _perfectNumber(i) ){
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0){
        printf("0");
    }
}
int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    perfectNumber(s, e);
    return 0;
}