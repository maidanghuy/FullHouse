//https://laptrinh24h.vn/problem/fhc19b01
#include <stdio.h>
#include <math.h> 
#include <stdbool.h>

int strlen(char s[]){
    int cnt = 0;
    while (s[cnt] != '\0') {
        cnt++;
    }
    return cnt;
}

int main() {

    char c[1000];
    fgets(c, sizeof(c), stdin);

    int count = 0;
    for (int i = 0; i < strlen(c); i++) {

        if ((c[i] >= 97 && c[i] <= 122)) {
            count++;
        }

    }
    printf("%d\n", count);
    return 0;
}