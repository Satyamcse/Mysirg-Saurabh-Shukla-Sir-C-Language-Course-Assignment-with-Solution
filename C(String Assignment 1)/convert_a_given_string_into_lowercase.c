#include<stdio.h>
int main(){
    char str[20];
    int i,count = 0;
    char ch;
    printf("Enter String: ");
    fgets(str, 20, stdin);
    for(i = 0; str[i]; i++){
        if(str[i] >= 'A' || str[i] <= 'Z'){
           str[i] = str[i] + 32;
        }
      }
      printf("%s",str);
}
