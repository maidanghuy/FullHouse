#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct nhanvien {
    char hoten[51];
    char gioitinh[6];
    char ngaysinh[13];
    char diachi[101];
    char masothue[11];
    char ngaykihopdong[13];
    int maso;
};

void chuanhoa_date(char date_chuan[]) {
    char form_chuan[13];
    char *token = strtok(date_chuan, "/");
    int day = atoi(token);
    token = strtok(NULL, "/");
    int month = atoi(token);
    token = strtok(NULL, "/");
    int year = atoi(token);
    sprintf(form_chuan, "%02d/%02d/%04d", day, month, year);
    strcpy(date_chuan, form_chuan);
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

int sosanh(char ns1[], char ns2[]) {
    int idx = 6;
    while (idx < 10) {
        if (ns1[idx] < ns2[idx]) {
            return 1;
        }
        else if (ns1[idx] > ns2[idx]) {
            return -1;
        }
        idx++;
    }
    idx = 3;
    while (idx < 5) {
        if (ns1[idx] < ns2[idx]) {
            return 1;
        }
        else if (ns1[idx] > ns2[idx]) {
            return -1;
        }
        idx++;
    }
    idx = 0;
    while (idx < 2) {
        if (ns1[idx] < ns2[idx]) {
            return 1;
        }
        else if (ns1[idx] > ns2[idx]) {
            return -1;
        }
       idx++;
    }
    return 0;
}

int cmp(struct nhanvien e1, struct nhanvien e2){
    char s1[20];
    strcpy(s1, e1.ngaysinh);
    char s2[20];
    strcpy(s2, e2.ngaysinh);
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
        return year_2 - year_1;
    }else if (month_1 != month_2){
        return month_2 - month_1;
    }else if (day_1 != day_2){
        return day_2 - day_1;
    }

    return strcmp(e1.masothue, e2.masothue);
}

int main() {
    int n;
    scanf("%d", &n);
    int m = n;
    int i = 0;
    struct nhanvien *employee = (struct nhanvien*)malloc(n * sizeof(struct nhanvien));
    // struct nhanvien employee[n];
    while (n) {
        scanf(" %[^\n]s", employee[i].hoten);
        scanf(" %[^\n]s", employee[i].gioitinh);
        scanf(" %[^\n]s", employee[i].ngaysinh);
        scanf(" %[^\n]s", employee[i].diachi);
        scanf(" %[^\n]s", employee[i].masothue);
        scanf(" %[^\n]s", employee[i].ngaykihopdong);
        employee[i].maso = i + 1;
        chuanhoa_date(employee[i].ngaysinh);
        chuanhoa_date(employee[i].ngaykihopdong);
        i++;
        n--;
    }
    for (int j = 0; j < m; j++) {
        for (int k = j + 1; k < m; k++) {
            if (cmp(employee[j], employee[k]) < 0){
                struct nhanvien temp = employee[j];
                employee[j] = employee[k];
                employee[k] = temp;
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%05d ", employee[i].maso);
        chuanHoaTen(employee[i].hoten);
        printf("%s %s %s %s %s\n", employee[i].gioitinh, employee[i].ngaysinh, employee[i].diachi, employee[i].masothue, employee[i].ngaykihopdong);

    }
    free(employee);
    return 0;
}