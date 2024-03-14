int main(){
    int rem,x,sum,n;
    for(n = 1; n < 1000; n++){
        x = n;
        sum = 0;
       while(x != 0){
        rem = x % 10;
        sum = sum + (rem * rem * rem);
        x = x / 10;
       }
        if(sum == n){
            printf("%d ",sum);
        }
    }

}
