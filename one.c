#include<stdio.h>
int sum_n(int n);
int main(){
int n;
printf("Enter the numbers whose sum you want to calculate\n");
scanf("%d",&n);

printf("Result is %d",sum_n(n));
return 0;
}
int sum_n(int n){
    if(n==0)
    return 0;
    else{
        int sum=n;
        int r=sum_n(n-1);
        sum=sum+r;
        return sum;
    }
}