#include<stdio.h>
int main(){
    char str[20];
    int i,count = 0;
    char ch;
    printf("Enter String: ");
    fgets(str, 20, stdin);
    for(i = 0; str[i]; i++){
       if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
         count++;
       }
    }
    printf("vowel is %d",count);
}
