#include<stdio.h>
void Reverse_String(char S[]);
int main(){
    char S[200];
    printf("Enter String ");
    fgets(S, 200, stdin);
    Reverse_String(S);
    return 0;
}
void Reverse_String(char str[]){
    int i,j, l,temp;
    for(l = 0; str[l]; l++);
    for(i = 0,j = l - 2; j >= i; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;  
  }
  printf("Reverse String is =  %s",str);
}