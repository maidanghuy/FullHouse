//https://laptrinh24h.vn/problem/fhc23b05
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void _chuanHoaTen(char s[]){
    s[0] = toupper(s[0]);
    for (int i=1; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

void chuanHoaTen(char s[]){
    char tmp[50][50];
    int idx=0;
    char *token = strtok(s, " \n");
    while (token != NULL){
        _chuanHoaTen(token);
        strcpy(tmp[idx++], token);
        token = strtok(NULL, " \n");
    }
    strcpy(s, tmp[0]);
    for (int i=1; i<idx; i++){
        strcat(s, " ");
        strcat(s, tmp[i]);
    }
}

void chuanHoaNgay(char s[]){
    int day = atoi(strtok(s, "/"));
    int month = atoi(strtok(NULL,"/"));
    int year = atoi(strtok(NULL,"/"));

    sprintf(s, "%02d/%02d/%04d", day, month, year);
}

int main(){
    char s[100];
    char birthday[11];
    FILE *f = NULL;
    f = fopen("Data.txt", "r");

    fgets(s, sizeof(s), f);
    chuanHoaTen(s);
    fgets(birthday, sizeof(birthday), f);
    chuanHoaNgay(birthday);

    fclose(f);
    
    f = NULL;
    f = fopen("SinhVien.txt", "w");
    
    fprintf(f, "%s\n%s\n", s, birthday);
    fclose(f);
}