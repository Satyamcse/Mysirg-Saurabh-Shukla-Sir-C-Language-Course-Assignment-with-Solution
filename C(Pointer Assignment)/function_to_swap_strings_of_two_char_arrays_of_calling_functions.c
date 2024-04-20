#include<stdio.h>
void swap(char**, char**); 
int main(){
    char *str[20],*S[20];
    printf("Enter two String: ");
    fgets(str, 20, stdin);
    fgets(S, 20, stdin);
    swap(&str,&S);
    printf("%s%s",str,S);
    return 0;
}
void swap(char **p,char **q){
    int *temp;
    temp = *p;
    *p = *q;
    *q = temp; 
}
