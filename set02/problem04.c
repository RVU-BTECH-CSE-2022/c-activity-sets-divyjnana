//sum of composite numbers in an array
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main(){
  int n,a[n],sum;
  input_array_size();
  input_array(n,a);
 sum =sum_composite_numbers(n,a);
  output(sum);
  return 0;
}
int input_array_size(){
  int n;
  printf("enter the size of an array");
  scanf("%d",&n);
  return n ;
}
void input_array(int n, int a[n]){
 int i;
  for(i=1;i<n;i++){
  printf("enter the numbers of array");
  scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]){
  int i;
  int sum=0;
  for(i=1;i<n;i++){
    count=0;
    for(j=1;j<a[i];j++){
      if(a[i]%(j+1)==0){
       if(count>=2){
         sum=sum+a[i];
          break;       }
      }
    }
  
}
return sum;
  }
void output(int sum){
printf("the sum is %d",sum);
}
