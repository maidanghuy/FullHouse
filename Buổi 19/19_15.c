//https://laptrinh24h.vn/problem/fhc19b15
#include <stdio.h>
#include <string.h>


int main() {
    char s1[1000];
    fgets(s1, 1000, stdin);

    char s2[1000];
    fgets(s2, 1000, stdin);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int a[123] = {0};
    int b[123] = {0};

    for (int i = 0; i < len1; i++){
        a[s1[i]]++;
    }

    for (int i = 0; i < len2; i++){
        b[s2[i]]++;
    }

    for (int i = 65; i <= 122; i++){
        if (a[i] != 0 && b[i] != 0){
            printf("%c",i);
        }
    }
    printf("\n");

    for (int i = 65; i <= 122; i++){
        if (a[i] != 0 || b[i] != 0){
            printf("%c",i);
        }
    }
    return 0;
}
