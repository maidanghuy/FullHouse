#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct infor{
    double n1, n2, n3;
    char name[100];
    char address[20];

};
typedef struct infor inf;

void input(inf *sv){
    gets(sv->address);
	gets(sv->name);
	scanf("%lf %lf %lf",&sv->n1, &sv->n2, &sv->n3);
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
double plusPoint(char s[]){
    strupper(s);
    if (strstr(s, "KV1") != NULL) {
        return 0.5000;
    }else if (strstr(s, "KV2") != NULL) {
        return 1.0000;
    }else{
        return 2.0000;
    }
}
void output(inf sv){
    strupper(sv.address);
    printf("%s ",sv.address);
    nameOutput(sv.name);
    double plus = plusPoint(sv.address);
    double res = sv.n1+sv.n2+sv.n3+plus;
    if (res == (int)res){
        printf("%.0lf ", res);
    }else {
        printf("%.1lf ", res);
    }
    if (res >= 26){
        printf("TRUNG TUYEN");
    }else{
        printf("TRUOT");
    }
}

int main(){
    inf sv;
    input(&sv);

    output(sv);
    return 0;
}