#include<stdio.h>
void check_Alphanumeric_string(char S[]);
int main(){
    char str[200];
    printf("Enter String ");
    fgets(str, 200, stdin);
    check_Alphanumeric_string(str);
    return 0;
}
void check_Alphanumeric_string(char S[]){
    int i,al = 0,d = 0;
   for(i = 0; S[i]; i++){
        if((S[i] >= 'a' && S[i] <= 'z')||(S[i] >= 'A' && S[i] <= 'Z')){
            al++;
        }
        else if(S[i] >= '0' && S[i] <= '9'){
           d++;
        }
     }
     if((d > 0) && (al > 0)){
        printf("String is Alphanumeric");
     }
     else{
        printf("String is not Alphanumeric");
     }
  }

