// compare three numbers by pass by value
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main(){
  int largest;
   int a = input();
   int b = input();
   int c= input();
   largest=compare(a,b,c);
   output(a,b,c,largest);
   return 0;
}
int input(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int compare(int a, int b, int c){
  if (a>b && a>c){
    return a;
  }
  if (b>c && b>a){
    return b;
  }
  else {
    return c;
  }
}
void output(int a, int b, int c, int largest){
  printf("the largest is %d",largest);
}
