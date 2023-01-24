#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main(){
  int a = input();
  int b = input();
  int c = input();
  int largest;
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}
int input(){
int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
  }
void compare(int a, int b, int c, int *largest){
 if  (a>b && a>c){
    *largest=a;
  }
  if (b>c && b>a){
    *largest=b;
  }
  if (c>a && c>b){
    *largest=c;
  }
}
void output(int a, int b, int c, int largest){
  printf("the largest is %d",largest);
}
