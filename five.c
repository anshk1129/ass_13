#include<stdio.h>
int main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("The sum is %d ",sum_di(n));
return 0;
}
int sum_di(int n){
    if(n==0){
        return ;
    }
    else{
        int d=n%10;
        int r=sum_di(n/10);
        return d+r;
    }
}