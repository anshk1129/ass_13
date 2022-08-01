#include<stdio.h>
int sum_sqn(int n);
int main(){
int n;
printf("Enter the numbers whose sum you want to calculate\n");
scanf("%d",&n);

printf("Result is %d",sum_sqn(n));
return 0;
}
int sum_sqn(int n){
    if(n==0)
    return 0;
    else{
        int sum=n*n;
        int r=sum_sqn(n-1);
        sum=sum+r;
        return sum;
    }
}