//add two numbers by pass by value
#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main(){
  int a =input();
  int b=input();
  int sum;
   sum = add(a,b);
  output(a,b,sum);
  return 0;
}
int input(){
 int n;
 printf("enter the number");
 scanf("%d",&n);
 return n;
}
int add(int a, int b){
  return a+b;
}
void output(int a, int b, int sum){
 printf ("the sum is %d",sum);
}
