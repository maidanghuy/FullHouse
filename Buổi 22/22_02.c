//https://laptrinh24h.vn/problem/fhc22b02
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct sinhVien{
    char code[20];
    char name[101];
    char class[20];
    char gmail[100];
};
typedef struct sinhVien SV;

void input(SV *sv){
    gets(sv->code);
    gets(sv->name);
    gets(sv->class);
    gets(sv->gmail);
}

void _chuanHoaTen(char s[]){
    s[0] = toupper(s[0]);
    for (int i=1; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

void chuanHoaTen(char s[]){
    char* token = strtok(s, " \n");
    char a[50][50];
    int idx = 0;
    while (token != NULL){
        _chuanHoaTen(token);
        strcpy(a[idx++], token);
        token = strtok(NULL, " \n");
    }

    for (int i=0; i<idx; i++){
        printf("%s ", a[i]);
    }
}

void output(SV sv){
    printf("%s ", sv.code);
    chuanHoaTen(sv.name);
    printf("%s ", sv.class);
    printf("%s ", sv.gmail);
}

void find_SV(SV sv[], int n, char majors[]){
    if (strcmp(majors, "CNTT") == 0){
        printf("DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN :\n");
        for (int i=0; i<n; i++){
            if (strstr(sv[i].class, "CNTT") != NULL){
                output(sv[i]);
                printf("\n");
            }
        }
    }else if (strcmp(majors, "DTVT") == 0){
        printf("DANH SACH SINH VIEN NGANH DIEN TU VIEN THONG :\n");
        for (int i=0; i<n; i++){
            if (strstr(sv[i].class, "DTVT") != NULL){
                output(sv[i]);
                printf("\n");
            }
        }
    }else if (strcmp(majors, "MKT") == 0){
        printf("DANH SACH SINH VIEN NGANH MARKETING :\n");
        for (int i=0; i<n; i++){
            if (strstr(sv[i].class, "MKT") != NULL){
                output(sv[i]);
                printf("\n");
            }
        }
    }else {
        printf("DANH SACH SINH VIEN NGANH KE TOAN :\n");
        for (int i=0; i<n; i++){
            if (strstr(sv[i].class, "MKT") == NULL && strstr(sv[i].class, "KT") != NULL){
                output(sv[i]);
                printf("\n");
            }
        }
    }

    // printf("%s", majors);
}


int main(){
    int n;
    scanf("%d", &n);
    getchar();
    SV sv[n];
    for (int i=0; i<n; i++){
        input(&sv[i]);
    }
    int t;
    scanf("%d", &t);
    char majors[20];
    getchar();
    while (t--){
        gets(majors);
        find_SV(sv, n, majors);
    }
    return 0;
}
// 5
// 1245331
// Pham Van Long
// CNTT1
// vlong@gmail.com
// 6845201
// Nguyen Thanh Chien
// DTVT1
// Jonhaw7@gmail.com
// 6336423
// Nghiem Xuan Tu
// CNTT2
// pyteeq@gmail.com
// 4356317
// Tran Van Tu
// KT
// tutv12@gmail.com
// 4356319
// Tran Van Tu
// MKT
// tutv12@gmail.com
// 4
// KT