#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int stt = 1;

struct sinhVien{
    int code;
    double GPA;
    char name[51];
    char class[51];
    char date[11];
};
typedef struct sinhVien inf;

void input (inf *sv){
    sv->code = stt++;
    scanf(" %[^\n]s",sv->name);
    scanf(" %[^\n]s",sv->class);
    scanf(" %[^\n]s",sv->date);
    scanf("%lf",&sv->GPA);
}

void _chuanHoaTen (char s[]){
    s[0] = toupper(s[0]);
    for (int i=1; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

void chuanHoaTen (char s[]){
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

void chuanHoaNgay (char s[]){
    int day = atoi(strtok(s, "/"));
    int month = atoi(strtok(NULL,"/"));
    int year = atoi(strtok(NULL,"/"));

    sprintf(s, "%02d/%02d/%04d", day, month, year);
    printf("%s ", s);
}

void output (inf sv){
    printf("SV%03d ", sv.code);
    chuanHoaTen(sv.name);
    printf("%s ", sv.class);
    chuanHoaNgay(sv.date);
    printf("%.1lf", sv.GPA);
}

int main(){
    inf sv;
    input(&sv);
    
    output(sv);
    return 0;
}