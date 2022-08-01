#include<stdio.h>
int main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("The digits are %d ",cal_digit(n,0));
return 0;
}
int cal_digit(int n,int count){
    if(n>0){
     count= cal_digit(n/10,++count);
      return count;
    }
    else 
    return;
}