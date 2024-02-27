//https://laptrinh24h.vn/problem/fhc22b04
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int number = 1;

struct infor{
    char name[100];
    char gender[20];
    char birthday[20];
    char address[100];
    char code[20];
    char day[20];
    char stt[10];
};
typedef struct infor inf;

void input(inf *employs){
    gets(employs->name);
	gets(employs->gender);
    gets(employs->birthday);
    gets(employs->address);
	gets(employs->code);
    gets(employs->day);
    char ma[10] = "00000";
    int tmp = number;
    int idx = 4;
    while (tmp!=0){
        ma[idx] = ma[idx] + (tmp%10);
        idx--;
        tmp /= 10;
    }
    strcpy(employs->stt, ma);
    number++;
}

void _chuanHoaTen(char s[]){
    s[0] = toupper(s[0]);
    for (int i=1; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

void chuanHoaTen(char s[]){
    char* token = strtok(s, " ");
    char a[50][50];
    int idx = 0;
    while (token != NULL){
        _chuanHoaTen(token);
        strcpy(a[idx++], token);
        token = strtok(NULL, " ");
    }

    for (int i=0; i<idx; i++){
        printf("%s ", a[i]);
    }
}

void chuanHoaNgay(char s[]){
    char* token = strtok(s, "/");
    int day = atoi(token);
    token = strtok(NULL, "/");
    int month = atoi(token);
    token = strtok(NULL, " ");
    int year = atoi(token);

    printf("%02d/%02d/%04d ", day, month, year);
}

int cmp(const void *a, const void *b){
    inf *e1 = (inf *)a;
    inf *e2 = (inf *)b;
    char s1[20];
    strcpy(s1, e1->birthday);
    char s2[20];
    strcpy(s2, e2->birthday);
    char* token_1 = strtok(s1, "/");
    int day_1 = atoi(token_1);
    token_1 = strtok(NULL, "/");
    int month_1 = atoi(token_1);
    token_1 = strtok(NULL, "/");
    int year_1 = atoi(token_1);

    char* token_2 = strtok(s2, "/");
    int day_2 = atoi(token_2);
    token_2 = strtok(NULL, "/");
    int month_2 = atoi(token_2);
    token_2 = strtok(NULL, "/");
    int year_2 = atoi(token_2);

    if (year_1 != year_2){
        return year_1 - year_2;
    }else if (month_1 != month_2){
        return month_1 - month_2;
    }else if (day_1 != day_2){
        return day_1 - day_2;
    }

    return strcmp(e1->code, e2->code);
}

void output(inf employs, int n){
    printf("%s ", employs.stt);
    chuanHoaTen(employs.name);
    printf("%s ", employs.gender);
    chuanHoaNgay(employs.birthday);
    printf("%s ", employs.address);
    printf("%s ", employs.code);
    chuanHoaNgay(employs.day);
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    inf employs[n];
    for (int i=0; i<n; i++){
        input(&employs[i]);
    }

    qsort(employs, n, sizeof(inf), cmp);

    for (int i=0; i<n; i++){
        output(employs[i], n);
        printf("\n");
    }
    return 0;
}

// Pham Van Lam
// Nam
// 22/9/1992
// Bien Hoa-Dong Nai
// 1
// 5/8/2017
// Hoang Nam Ton
// Nam
// 7/10/2000
// Dak Lak
// 2
// 13/11/2019
// Hoang Thi Hau
// Nu
// 04/02/1997
// Than Hoa
// 3
// 22/8/2020