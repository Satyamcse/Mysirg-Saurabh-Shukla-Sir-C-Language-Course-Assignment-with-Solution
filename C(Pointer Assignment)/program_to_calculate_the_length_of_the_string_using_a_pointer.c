#include<stdio.h>
int main(){
    char str[200],*S;
    int i;
    printf("Enter String: ");
    fgets(str, 200, stdin);
    S = str;
    for(i = 0; *(S+i); i++);
    printf("Length of String is %d",i-1);
}