#include<stdio.h>
int sum_odd(int n);
int main(){
int n;
printf("Enter the numbers whose sum you want to calculate\n");
scanf("%d",&n);

printf("Result is %d",sum_odd(n));
return 0;
}
int sum_odd(int n){
    if(n==0)
    return 0;
    else{
        int sum=2*n-1;
        int r=sum_odd(n-1);
        sum=sum+r;
        return sum;
    }
}