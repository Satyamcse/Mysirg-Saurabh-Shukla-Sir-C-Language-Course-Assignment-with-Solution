#include<stdio.h>
int main(){
    char str[10];
    int i,count = 0,count1 = 0,count2 = 0,l;
    printf("Enter String: ");
    fgets(str,10,stdin);
    for(i = l - 2; i >= 0; i--){
        if(str[i] >= 'a' || str[i] <= 'z'){
            count++;
        }
        else if(str[i] >= 'A' || str[i] <= 'Z'){
             count++;  
        }
        else if(str[i] >= '0' || str[i] <= '9'){
            count1++;
        }
        else{
            count2++;
        }
  }
  printf("Total Number of alphaber is %d and digit is %d and Charater is %d",count,count1,count2);
}