//https://laptrinh24h.vn/problem/cthsg04
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    bool son[201];
    memset(son, false, sizeof(son));
    for (int i = a; i <= b; i++) {
        son[i] = true;
    }

    for (int i = c; i <= d; i++) {
        son[i] = true;
    }

    int count = 0;
    for (int i = 0; i <= 199; i++) {
        if (son[i] && son[i + 1]){
            count++;
            // printf("%d %d / ", i, i + 1);
        }
    }
    printf("%d\n", count);
    return 0;
}