//sum of all natural numbers until n
#include<stdio.h>
int input_n();
void output(int n, int sum);
int main(){
  int n= input();
  int sum;
  sum=sum_n_nos(n);
  output(n,sum);
  return 0;
}
int input_n(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
  }
sum_n_nos(int n){
  int i,sum=0;
  for (i=1;i<=n;i++){
    sum=sum+i;
  }
}
 void output(int n, int sum){
   printf("the sum is %d",sum);
 }
