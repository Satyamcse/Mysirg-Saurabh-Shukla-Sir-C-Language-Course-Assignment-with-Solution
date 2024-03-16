#include<stdio.h>
int main(){
    int MonthName;
    printf("Enter Month Name");
    scanf("%d",&MonthName);
    switch (MonthName)
    {
    case 1:
        printf("31");
        break;
    case 2:
        printf("29");
        break;
    case 3:
        printf("31");
        break;
    case 4:
        printf("30");
        break;
    case 5:
        printf("31");
        break;
    case 6:
        printf("30");
        break;
    case 7:
        printf("31");
        break;
    case 8:
        printf("31");
        break;
    case 9:
        printf("30");
        break;
    case 10:
        printf("31");
        break;
    case 11:
        printf("30");
        break;
    case 12:
        printf("31");
        break;
    default:
        printf("Invalid Value");
    }
}
