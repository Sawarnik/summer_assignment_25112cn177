#include <stdio.h>
int main (){
    int n,sum=0;
    printf("total numbers for which the um is to be found : \n");
    scanf("%d" ,&n);
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("sum = %d", sum);
    return 0;
}