//https://laptrinh24h.vn/problem/fhc10b13
#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    fgets(s, 1000, stdin);
    
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < strlen(s) - 1; i++) {
        if ((s[i] - 48) % 2 == 0) {
            sumEven += (s[i] - 48);
        }else {
            sumOdd += (s[i] - 48);
        }
    }

    printf("%d\n%d", sumEven, sumOdd);

    return 0;
}