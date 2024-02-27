//https://laptrinh24h.vn/problem/fhc23b03
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int *x = (int *)a;
    int *y = (int *)b;

    return *x - *y;
}

int main(){
    int a[100005];
    int idx = 0;
    FILE *f = NULL;
    f = fopen("inputNumber.txt", "r");
    while (fscanf(f, "%d", &a[idx]) != EOF){
        idx++;
    }

    qsort(a, idx, sizeof(a[0]), cmp);
    fclose(f);

    f = NULL;
    f = fopen("outputNumber.txt", "w");
    for (int i=0; i<idx; i++){
        fprintf(f, "%d ", a[i]);
    }
    fclose(f);
    return 0;
}