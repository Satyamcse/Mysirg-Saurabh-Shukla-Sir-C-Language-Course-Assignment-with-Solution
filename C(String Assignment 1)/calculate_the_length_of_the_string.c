#include<stdio.h>
int main(){
    char str[20] = {'S','A','T','Y','A','M'},i;
    for(i = 0; str[i]; i++);
    printf("Length of string %d",i);
}