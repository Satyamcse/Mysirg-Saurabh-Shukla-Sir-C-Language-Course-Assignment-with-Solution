#include<stdio.h>
int main(){
    char str[200],*S;
    int l,i;
    printf("Enter String: ");
    fgets(str, 200, stdin);
    S = str;
    for(l = 0; *(S+l); l++);
    for(i = (l-1); *(S+i); i--){
       printf("%c",*(S+i));
    }
}