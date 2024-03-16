/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */

#include<stdio.h>
int main(){
        int side1,side2,side3,choice;
        printf("\n1. Check Isosceles triangle or not");
        printf("\n2. Check right angle triangle or not");
        printf("\n3. Equilateral triangle or not");
        printf("\n4. Exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice){
        case 1:
             printf("Enter Three Number");
             scanf("%d%d%d",&side1,&side2,&side3);
             if(side1 == side2 || side1 == side3 || side2 == side3){
               printf("Isosceles triangle");
               break;
             }
             else{
               printf("Not Isosceles triangle");
               break;
             }
        case 2:
             printf("Enter Three Number");
             scanf("%d%d%d",&side1,&side2,&side3);
              if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1){
               printf("Right angle triangle");
               break;
              }
              else{
               printf("Not a Right Triangle");
               break;
              }
         case 3:
              printf("Enter Three Number");
              scanf("%d%d%d",&side1,&side2,&side3); 
              if(side1 == side2 && side2 == side3 && side1 == side3){
               printf("equilateral triangle");
               break;
              }
              else{
               printf("not equilateral triangle");
               break;
              }
          case 4:
              exit(0);
         default :
              printf("Invalid Choice");
              break; 
        }
    }
