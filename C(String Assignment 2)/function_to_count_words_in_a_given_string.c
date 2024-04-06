#include<stdio.h>
void Count_Words_in_String(char []);
int main(){
    char S[200];
    printf("ENter String ");
    fgets(S, 200, stdin);
    Count_Words_in_String(S);
    return 0;
}
void Count_Words_in_String(char str[]){
    int i,count = 0;
    for(i = 0; str[i]; i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            count++;
        }
    }
    printf("Total Number of words in a String %d",(count+1));
}