// %[^\n]: Doc chuoi cho toi \n
// %*c: Bo \n trong cau
// scanf("%[^\n]%*c", sv.hoten)

// in một chuỗi mới vào chuỗi format_date[11]
// char format_date[11];
// sprintf(format_date,"%02d/%02d/%0004d", day, month, year);

//https://laptrinh24h.vn/problem/fhc22b01
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stt = 1;

struct matHang{
    char code[10];
    char name[105];
    char unit[15];
    int buy, sell;
    int profix;
};
typedef struct matHang MH;

void input(MH *mh){
    getchar();
    gets(mh->name);
	gets(mh->unit);
    scanf("%d %d", &mh->buy, &mh->sell);
    mh->profix = mh->sell - mh->buy;
    char ma[10] = "MH0000";
    int tmp = stt;
    int idx = 5;
    while (tmp!=0){
        ma[idx] = ma[idx] + (tmp%10);
        idx--;
        tmp /= 10;
    }
    strcpy(mh->code, ma);
    stt++;
}

void output(MH mh){
    printf("%s ", mh.code);
    printf("%s ", mh.name);
    printf("%s ", mh.unit);
    printf("%d %d %d", mh.buy, mh.sell, mh.profix);
}

int cmp(const void *a, const void *b){
    MH *m1 = (MH *)a;
    MH *m2 = (MH *)b;

    if (m1->profix != m2->profix){
        return m2->profix - m1->profix;
    }
    return strcmp(m1->code, m2->code);
}

int main(){
    int n;
    scanf("%d", &n);

    MH mh[n];
    for (int i=0; i<n; i++){
        input(&mh[i]);
    }
    
    qsort(mh, n, sizeof(MH), cmp);

    for (int i=0; i<n; i++){
        output(mh[i]);
        printf("\n");
    }
    return 0;
}