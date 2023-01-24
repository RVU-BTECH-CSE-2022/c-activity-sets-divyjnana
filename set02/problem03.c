// to find if the number is composite
#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main(){
  int n=input_number();
  int result;
  result=is_composite(n);
  output(n,result);
  return 0;
}
int input_number(){
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n ;
}
int is_composite(int n){
int i;
int result=0;
  for(i=1;i<=n;i++){
    if(n%i==0){
    result=result+1;
    }
}
return result;
}
void output(int n, int result){ if (result==2){printf("is a prime number");}
 else{ printf("is a composite number");}
  
}
 