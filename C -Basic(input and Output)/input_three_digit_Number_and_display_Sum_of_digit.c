#include<stdio.h>
int main(){
 int num;
 printf("Enter Number");
 scanf("%d",&num);
 num = num%10 + num/100 + num/10%10;
 printf("The Sum is %d",num);
 return 0;   
}