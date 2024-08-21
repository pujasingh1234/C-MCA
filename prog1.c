#include<stdio.h>
int main(){
    int a,b,c,sum=0,avg=0;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter third number");
    scanf("%d",&c);
    sum=a+b+c;
    avg=(a+b+c)/3;
    printf("sum of three number is %d\n ", sum);
    printf("average of three number is %d ", avg);
    }