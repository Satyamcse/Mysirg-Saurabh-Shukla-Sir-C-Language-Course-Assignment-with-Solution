#include<stdio.h>
int main(){
    char str[20];
    int i,count = 0;
    char ch;
    printf("Enter String: ");
    fgets(str, 20, stdin);
    printf("Enter Character: ");
    scanf("%c",&ch);
    for(i = 0; str[i]; i++){
       if(str[i] == ch){
         count++;
       } 
    }
    printf("charater count is %d",count);
}