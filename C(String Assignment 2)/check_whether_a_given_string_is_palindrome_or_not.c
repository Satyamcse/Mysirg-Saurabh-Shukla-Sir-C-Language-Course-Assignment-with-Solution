#include<stdio.h>
void palindrome_or_not(char []);
int main(){
    char S[200];
    printf("Enter String: ");
    fgets(S, 200, stdin);
    palindrome_or_not(S);
    return 0;
}
void palindrome_or_not(char str[]){
   int i,l,j;
   for(l = 0; str[l]; l++);
   for(i = 0, j = (l - 2); str[i]; i++,j--){
        if(str[i] != str[j]){
            break;
        }
    }
  if(i >= j){
    printf("String is Palindrome");
  }
  else{
    printf("String is not Palindrome");
  }
}
