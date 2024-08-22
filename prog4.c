#include<stdio.h>
int main(){
    //program to generate prime numbers between 1 to n.//
    int i,num,n,count;
    printf("enter the range:");
    scanf("%d",&n);
    printf("the prime number between 1 to %d:",n);
    for(num=1;num<=n;num++){
        count=0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                count ++;
                break;
                }

            }
            if(count==0 && num!=1)
            printf("%d",num);
        }
        return 0;
        
    
     
}