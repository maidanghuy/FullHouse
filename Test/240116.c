// #include <stdio.h>
// #include <string.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int x = 0;

//     for(int i = 0; i < n; i++){
//         char s[4];
//         fgets(s, 4, stdin);
//         getchar();
//         if (s[1] == '+'){
//             x++;
//         }else if (s[1] == '-'){
//             x--;
//         }
//     }
//     printf("%d\n", x);
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[1001];
//     gets(s);  

    // char *token = strtok(s, "-*,+");
    // while (token != NULL){
    //     printf("%s\n", token);
    //     token = strtok(NULL, "+,-*");
    // }
    // printf("%s", s);
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void strlower(char s[]){
//     for (int i = 0; i < strlen(s); ++i)
//      s[i] = tolower(s[i]);
// }

// int main() {
//     //set up
//     char s[1001], b[50][50];
//     gets(s);  
//     int idx = 0;

//     // Nhet vao mang
//     char *token = strtok(s, " ");
//     while (token != NULL){
//         strcpy(b[idx++], token);
//         token = strtok(NULL, " ");
//     }

//     // xu ly
//     strlower(b[idx - 1]);
//     printf("%s", b[idx - 1]);

//     for (int i = 0; i < idx - 1; ++i){
//         printf("%c", tolower(b[i][0]));
//     }
//     printf("@gmail.com");
// } 

// #include <stdio.h>

// int main(){

//     // char c[1001];
//     // sprintf(c, "%d Hello %d", 50, 53);
//     // printf("%s", c);
//     printf("%0-5d %0-5d", 50, 50);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char s[10];
//     int i;
//     scanf("%[^\n]",s);
//     scanf("%d",&i);
//     printf("%s",s); 
//     printf("%d",i);
// } 