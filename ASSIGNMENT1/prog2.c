#include<stdio.h>
int main(){
    int n, sum=0;
    printf("enter a positive number\n");
    scanf("%d",&n);
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("sum of individual digit of a positive integer is :%d", sum);
    return 0;
}