#include<stdio.h>
void String_Lowercase(char S[]);
int main(){
    char str[200];
    printf("Enter String");
    fgets(str, 200, stdin);
    String_Lowercase(str);
    return 0;
}
void String_Lowercase(char S[]){
    int i;
    for(i = 0; S[i]; i++){
        if(S[i] >= 'a' || S[i] <= 'z'){
           S[i] = S[i] + 32;
        }
      }
      printf("%s",S);
}
