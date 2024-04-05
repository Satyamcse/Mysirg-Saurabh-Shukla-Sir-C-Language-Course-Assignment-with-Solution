#include<stdio.h>
int main(){
    char str[10];
    int i,j, l,temp;
    printf("Enter String: ");
    fgets(str,10,stdin);
    for(l = 0; str[l]; l++);
    for(i = 0,j = l - 2; j >= i; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;  
  }
  printf("%s",str);
}