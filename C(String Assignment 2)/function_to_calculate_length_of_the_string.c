#include<stdio.h>
int length_of_string(char[]);
int main(){
    char str[200];
    printf("Enter String ");
    fgets(str, 200, stdin);
    printf("Lenght of String of %d",length_of_string(str));
}
int length_of_string(char S[]){
    int i;
    for(i = 0; S[i]; i++);
    return (i-1);
}