//to check the number is prime
#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main(){
  int n, result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}
int input_number(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}
int is_prime(int n){
    int i,result;
   result =0;
  for(i=1;i<=n;i++){
  if(n%i==0){
    result=result+1;
    }
    }
    return result;
  }

void output(int n, int result){
    if(result==2){
        printf("is a prime number");
    }
    else{
        printf("is  not a prime number");
    }
}
