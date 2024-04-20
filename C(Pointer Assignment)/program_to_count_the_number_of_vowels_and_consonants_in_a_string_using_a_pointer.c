#include<stdio.h>
int main(){
    char str[200],*S;
    int i,count = 0, count1 = 0;
    printf("Enter String: ");
    fgets(str, 200, stdin);
    S = str;
    for(i = 0; *(S+i) != '\0'; i++){
        if(*(S+i) == 'a'||*(S+i) == 'e'||*(S+i) == 'i'||*(S+i) == 'o'||*(S+i) == 'u'){
           count++;
        }
        else if(*(S+i) == 'A'||*(S+i) == 'E'||*(S+i) == 'I'||*(S+i) == 'O'||*(S+i) == 'U'){
           count++;
        }
        else if(*(S+i) ==' '){
            continue;
        }
        else{
            count1++;
        }
    }
    printf("%d is Vowel",count);
    printf("\n%d is Consonant",count1-1);

}