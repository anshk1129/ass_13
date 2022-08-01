#include<stdio.h>
int main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("The factorial is %d",fact(n));
return 0;
}
int fact(int fac){
    if(fac==0||fac==1){
        return 1;
    }
    return fac*fact(fac-1);
}