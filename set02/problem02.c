/#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int result);
int main(){
  int a=input_side();
  int b=input_side();
  int c=input_side();
  int result;
  result=check_scalene(a,b,c);
  output(a,b,c,result);
  return 0;
}
int input_side(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c){
  if(a==b||a==c||b==c){
    return 1;
  }
  else{return 2;
  }
}
void output(int a, int b, int c, int result){
   if(result==1){
     printf("is not scalene");
   }
 else{
   printf("is scalene");
 }
}
