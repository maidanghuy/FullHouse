#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct infor{
    double n1, n2, n3;
    char name[100];
    char birthday[20];

};
typedef struct infor inf;

void input(inf *sv){
    scanf("%[^\n]%*c", sv->name);
    scanf("%[^\n]%*c", sv->birthday);
	scanf("%lf %lf %lf",&sv->n1, &sv->n2, &sv->n3);
}

void _chuanHoa(char s[]){
    s[0] = toupper(s[0]);
    for (int i=1; i<strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

void nameOutput(char s[]){
	char* token = strtok(s , " ");
	char a[20][20];
	int n = 0;
	while(token != NULL){
		_chuanHoa(token);
		strcpy(a[n++] , token);
		token = strtok(NULL , " ");
	}
	for(int i = 0;i < n; ++i)
	printf("%s ",a[i]);
}

int _birthDay(char s[]){
    int n = 0;
    for (int i=0; i<strlen(s); i++){
        n = n*10 + s[i] - 48;
    }
    return n;
}

void birthDay(char s[]){
    char* token = strtok(s, "/");
    int day = _birthDay(token);
    token = strtok(NULL,"/");
    int month = _birthDay(token);
    token = strtok(NULL," ");
    int year = _birthDay(token);
    char a[20];
    sprintf(a,"%02d/%02d/%d", day, month, year);
    printf("%s ", a);
}

void output(inf sv){
    nameOutput(sv.name);
    birthDay(sv.birthday);
    double res = sv.n1 + sv.n2 + sv.n3;
    printf("%.1f", res);
}

int main(){
    inf sv;
    input(&sv);

    output(sv);
    return 0;
}