//to check whether given points is triangle or not
#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main(){
    float x1,y1,x2,y2,x3,y3;
    int result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result= is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("enter the coordinates");
  scanf("%f,%f,%f,%f,%f,%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  int result;
  result = (x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));
  return result ;
  }


void output(float x1, float y1, float x2, float y2,float x3, float y3, int result) {
    if (result==0){
        printf("is  not a triangle");
    }
    else{ printf("is a triangle");}
}
