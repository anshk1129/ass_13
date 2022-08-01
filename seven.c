#include<stdio.h>
int cal_hcf(int n,int a,int b);
int main(){
int n,a,b;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
n=a<b?a:b;
printf("Hcf of a number is %d",cal_hcf(n,a,b));
 cal_hcf(n,a,b);
return 0;
}
int cal_hcf(int n,int a,int b){
if(n>=1){
   if(a%n==0&&b%n==0){
    return n;
   }
  return cal_hcf(--n,a,b);
}
else{
    return ;
}

}