#include<stdio.h>
int main(){
    int N,i;
    printf("Enetr Number");
    scanf("%d",&N);
    if(N%2){
    for(i = 0; i <= N/2; i++){
        printf("%d\n",N-2*i);
    }
    }
    else
    {
        N = N-1;
        for(i = 0; i <= N/2; i++){
        printf("%d\n",N-2*i);
    }
    return 0;
}
}