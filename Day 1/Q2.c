#include<stdio.h>
int main(){
    int n,x=0;
    printf("Enter the number whose table is required :\n");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        x=n*i;
        printf("%d\n", x);
    }
    return 0;
}