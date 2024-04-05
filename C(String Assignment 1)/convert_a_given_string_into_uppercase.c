#include<stdio.h>
int main(){
    char str[20];
    int i,count = 0;
    char ch;
    printf("Enter String: ");
    fgets(str, 20, stdin);
    for(i = 0; str[i]; i++){
        if(str[i] >= 'a' || str[i] <= 'z'){
           str[i] = str[i] - 32;
        }
      }
      printf("%s",str);
}
