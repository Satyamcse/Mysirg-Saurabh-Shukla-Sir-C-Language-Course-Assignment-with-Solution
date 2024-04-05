#include<stdio.h>
int main(){
    char str[200];
    int i,al,d,sp;
    al = d = sp = 0;
     printf("Enter String: ");
     fgets(str, 200, stdin);
    for(i = 0; str[i] != '\0'; i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            al++;
        }
        else if(str[i] >= '0'&& str[i] <= '9'){
               d++;
        }
        else{
             sp++;
        }
    }
  printf("Total Number of alphabet is %d and digit is %d and Special-Character is %d",al,d,sp-1);
}
