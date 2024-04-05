#include<stdio.h>
int main(){
    char str[20],S[20],i;
    printf("Enter String: ");
    fgets(str, 20, stdin);
    for(i = 0; str[i]; i++){
        S[i] = str[i];
    }
    printf("%s",str);
    printf("%s",S);
}