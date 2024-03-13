#include<stdio.h>
int main(){
    int num,i = 1,count = 0;
    printf("Enter number");
    scanf("%d",&num);
   for(i = 1; i <= num; count++)
    {
        num = num / 10;
    }
    printf("%d",count);
    
}