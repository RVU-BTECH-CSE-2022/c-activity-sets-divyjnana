//find hcf
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main(){
  int a = input();
  int b = input();
  int gcd;
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}
int input(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b){
  int i,gcd;
  for(i=1;i<=a|| i<=b;i++){
    if(a%i==0&&b%i==0){
      gcd=i;
    }    
  }
  return gcd;
}
void output(int a, int b, int gcd){
  printf("the gcd is %d",gcd);
}
