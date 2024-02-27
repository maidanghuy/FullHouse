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

int _findBlankSpace(char s[]){
    int res = 0;
    for (int i=strlen(s)-1; i>=0; i--){
        if (s[i] == ' '){
            res = i;
            break;
        }
    }
    return res;
}

int main(){
    char s[100];
    char a[50][100];
    int idx = 0;
    FILE *f = NULL;
    f = fopen("Name.txt", "r");

    while(fgets(s, 100, f) != NULL){
        chuanHoaTen(s);
        strcpy(a[idx++], s);
    }

    fclose(f);
    for (int i=0; i<idx-1; i++){
        for (int j=i+1; j<idx; j++){
            int x=_findBlankSpace(a[i]);
            int y=_findBlankSpace(a[j]);
            char c1[10];
            strncpy(c1, a[i]+x, 6);
            char c2[10];
            strncpy(c2, a[j]+y, 6);
            if (strcmp(c1, c2)>0){
                char tmp[100];
                strcpy(tmp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], tmp);
            }else if (strcmp(c1, c2)==0){
                if (strcmp(a[i], a[j])>0){
                char tmp[100];
                strcpy(tmp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], tmp);
                }
            }
        }
    }
    
    f = NULL;
    f = fopen("Convert.txt", "w");

    for (int i=0; i<idx; i++){
        fprintf(f, "%s\n", a[i]);
    }
    fclose(f);
}