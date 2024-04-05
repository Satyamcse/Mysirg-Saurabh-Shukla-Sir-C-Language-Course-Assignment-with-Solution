#include<stdio.h>
int main(){
    char str[20],temp;
    int i,j,l;
    printf("Enter String: ");
    fgets(str, 20, stdin);
    for(l = 0; str[l]; l++);
    for(i = 0;i <= (l - 2); i++){
        for(j = i+1;j <= (l - 2); j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s",str);

}
