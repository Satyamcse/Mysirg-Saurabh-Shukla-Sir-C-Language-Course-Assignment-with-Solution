// TSRS
int simple_interest(int,int,int);
#include<stdio.h>
int main(){
    int P,R,T;
    printf("Enter the value of P,R,T");
    scanf("%d%d%d",&P,&R,&T);
    printf("Simple Interest is %d",simple_interest(P,R,T));
    return 0;
}
int simple_interest(int p, int r, int t){
   int result;
   result = (p * r * t)/ 100;
   return result;
}
