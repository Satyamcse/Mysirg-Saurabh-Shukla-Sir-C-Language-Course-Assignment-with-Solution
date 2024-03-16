#include<stdio.h>
int main(){
    int year;
    printf("Enter Year");
    scanf("%d",&year);
    switch(year % 100 == 0){

        case 1:
                if(year % 400 == 0){
                   printf("%d is loop year",year);
                   break;
                }
                else{
                    printf("%d is not loop",year);
                    break;
                }
        case 0:
              if(year % 4 == 0){
                printf("%d is Loop Year",year);
                break;
              }
              else{
                printf("%d is not loop year",year);
                break;
            }
    }
}
