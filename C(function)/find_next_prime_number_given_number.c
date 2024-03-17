int Next_Prime_Number(int);
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number");
    scanf("%d",&num);
    printf("Next prime number %d",Next_Prime_Number(num));
    return 0;
}
int Next_Prime_Number(int n){
     int j;
     n = n + 1;
     while(1){
        for(j = 2; j < n; j++){
            if(n % j == 0){
                break;
            }
        }
    if(j == n){
        return n;
        
    }
    n++;
  }

}