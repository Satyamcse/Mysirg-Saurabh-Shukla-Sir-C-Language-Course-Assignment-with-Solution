#include<stdio.h>
void print_first_N_natural_number(int);
int main(){
 int num;
 printf("Enter Number");
 scanf("%d",&num);
print_first_N_natural_number(num);
 return 0;
}
void print_first_N_natural_number(int n){
    if(n > 0){

            printf("%d ",n);
            print_first_N_natural_number(n-1);
    }
}
