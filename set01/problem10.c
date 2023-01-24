#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main(){
  char string1[10];char string2[10];
  int result;
  input_two_strings( string1,string2);
  result = stringcompare(string1,string2);
  output(string1,string2,result);
}
void input_two_strings(char *string1, char *string2){
  printf("enter a string\n");
  scanf("%s",string1);
  printf("enter a string\n");
  scanf("%s",string2);
}
int stringcompare(char *string1, char *string2){
  int i,result;
       result=strcmp(string1,string2);
  if (result==0){
    printf("they are equal");}
  
  else{printf("they are not equal");}
}
void output(char *string1, char *string2, int result){
   printf("%d",strcmp(string1,string2));}