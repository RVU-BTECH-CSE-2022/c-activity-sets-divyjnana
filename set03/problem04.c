//find nth number is fibonacci series
#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
 int main(){
   int n,fibo;
   n=input();
   fibo=find_fibo(n);
   output(n,fibo);
 }
int input(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n){
    int a=0, b=1, fibo,i;
for (i = 2; i <= n; ++i)
{
//printf("%d",a);
fibo = a+b;
a = b;
b = fibo;
}
return fibo;
}
  void output(int n, int fibo){
    printf("the fibo is %d",fibo);
  }