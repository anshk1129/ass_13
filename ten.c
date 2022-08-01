#include<stdio.h>
int main(){
int n,deg;
printf("Enter the value and degree(value^degree)\n");
scanf("%d %d",&n,&deg);
printf("The result is %d ",cal_pow(n,deg));
return 0;
}
int cal_pow(int n,int deg){
    if(deg==0){
        return 1;
    }
    else{
        int val=cal_pow(n,--deg);
        return val*n;
    }
}