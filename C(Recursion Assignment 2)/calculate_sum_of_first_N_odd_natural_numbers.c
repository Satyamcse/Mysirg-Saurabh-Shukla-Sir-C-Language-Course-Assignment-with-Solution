int Sum_of_odd_N_Natural_Number(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("%d",Sum_of_odd_N_Natural_Number(num));
    return 0;
}
int Sum_of_odd_N_Natural_Number(int n){
        if(n > 0){
             n = (2 * n - 1) + Sum_of_odd_N_Natural_Number(n - 1);
         }
   return n;
}