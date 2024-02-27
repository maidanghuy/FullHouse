//https://laptrinh24h.vn/problem/fhc19b12
#include <stdio.h>
#include <string.h>

int check(char s[]) {
    int right = (int)strlen(s) - 1;
    int left = 0;

    while (left < right) {
        if (s[left] != s[right - 1]) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    if (check(s)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
