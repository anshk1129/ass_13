#include<stdio.h>
void print_fib(int,int,int);
int main(){
int n;
printf("enter how many terms you want to print\n");
scanf("%d",&n);
print_fib(n,0,1);
return 0;
}
void print_fib(int n,int a ,int b){
    if(n>0){
        printf("%d ",a);
       int c=a+b;
        a=b;
        b=c;
        print_fib(n-1,a,b);

    }
    else 
    return;

}