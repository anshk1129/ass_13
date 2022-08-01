#include<stdio.h>
int sum_even(int n);
int main(){
int n;
printf("Enter the numbers whose sum you want to calculate\n");
scanf("%d",&n);

printf("Result is %d",sum_even(n));
return 0;
}
int sum_even(int n){
    if(n==0)
    return 0;
    else{
        int sum=n*2;
        int r=sum_even(n-1);
        sum=sum+r;
        return sum;
    }
}