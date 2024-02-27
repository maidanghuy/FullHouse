#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct infor{
    long long salary;
    char name[100];
    char code[20];

};
typedef struct infor inf;

void input(inf *sv){
    gets(sv->code);
	gets(sv->name);
	scanf("%lld",&sv->salary);
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

int _level(char s[]){
    strupper(s);
    char* token = strtok(s, "HTHPGV");
    int level = 0;
    for (int i=0; i<2; i++){
        level = level*10+token[i]-48;
    }
    return level;
}

int _bonus(char s[]){
    strupper(s);
    if(strstr(s, "HT")){
        return 2000000;
    }else if (strstr(s, "HP")){
        return 1000000;
    }else{
        return 500000;
    }
}

void output(inf sv){
    strupper(sv.code);
    printf("%s ",sv.code);

    nameOutput(sv.name);

    int level = _level(sv.code);
    printf("%d ", level);

    int bonus = _bonus(sv.code);
    
    int salary = sv.salary*level+bonus;
    printf("%d", salary);

}



int main(){
    inf sv;
    input(&sv);

    output(sv);
    return 0;
}