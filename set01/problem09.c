// to find the square root
#include<stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main(){
  float n = input();
  float sqrroot;
  sqrroot= square_root(n);
  output(n,sqrroot);
  return 0;
  } 
float input(){
  float n;
  printf("enter the number");
  scanf("%f",&n);
  return n;
}
float square_root(float n){
   return sqrt(n);
}
void output(float n, float sqrroot){
  printf("the squareroot is %f",sqrroot);
}

