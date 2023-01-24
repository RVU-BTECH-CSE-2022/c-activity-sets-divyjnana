#include<stdio.>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main(){
  int a= input();
  int b= input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}
int input(){
  int (n);
 printf("enter the number");
  scanf("%d",&n);
  return(n);
}
void add(int a, int b, int *sum){
  *sum=a+b;
  }
void output(int a, int b, int sum){
  printf("the sum is %d",sum);
}
