#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct infor{
    double point;
    char name[100];
    char code[20];
    char day[20];

};
typedef struct infor inf;

void input(inf *sv){
    gets(sv->name);
	gets(sv->code);
    gets(sv->day);
	scanf("%lf",&sv->point);
}

void strupper(char s[]){
    for (int i=0; i<strlen(s); i++){
        s[i] = toupper(s[i]);
    }
}

void _chuanHoa(char s[]){
    s[0] = toupper(s[0]);
    for (int i=1; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}
void nameOutput(char s[]){
    char* token = strtok(s, " ");
    char a[20][20];
    int idx = 0;
    while (token != NULL){
        _chuanHoa(token);
        strcpy(a[idx++], token);
        token = strtok(NULL, " ");
    }

    for (int i=0; i<idx; i++){
        printf("%s ", a[i]);
    }
}

int _day(char s[]){
    int n = 0;
    for (int i=0; i<strlen(s); i++){
        n = n*10 + s[i] - 48;
    }
    return n;
}

void dayOutput(char s[]){
    char* token = strtok(s, "/");
    int day = _day(token);

    token = strtok(NULL, "/");
    int month = _day(token);

    token = strtok(NULL, " ");
    int year = _day(token);

    printf("%02d/%02d/%04d ", day, month, year);
}

void output(inf sv){
    printf("SV001 ");
    nameOutput(sv.name);

    strupper(sv.code);
    printf("%s ",sv.code);

    dayOutput(sv.day);

    printf("%.1lf ", sv.point);
}



int main(){
    inf sv;
    input(&sv);

    output(sv);
    return 0;
}