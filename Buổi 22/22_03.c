
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

struct infor{
    char name[100];
    char gender[20];
    char birthday[20];
    char address[100];
    char code[20];
    char day[20];
};
typedef struct infor inf;

void input(inf *employs){
    gets(employs->name);
	gets(employs->gender);
    gets(employs->birthday);
    gets(employs->address);
	gets(employs->code);
    gets(employs->day);
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

void output(inf employs){
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

        printf("%05d ", i+1);
        output(employs[i]);
        printf("\n");
    }
    free(employs);
    return 0;
}