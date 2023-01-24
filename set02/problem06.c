//to reverse a string
#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main(){
  char a[100];char b[100];
  input_string(a);
  str_reverse(a,b);
  output(a,b);
}
void input_string(char *a){
  printf("enter a string");
  scanf("%s",a);
}
void str_reverse(char *str, char *rev_str){
    int i,x,y;
    x=strlen(str);
  for(i=0;i<=x/2;i++){
      y=str[i];
      str[i]=str[x-i-1];
      str[x-i-1]=y;
  }
}
void output(char *a, char *reverse_a){
  printf("the final string is %s",a);
}