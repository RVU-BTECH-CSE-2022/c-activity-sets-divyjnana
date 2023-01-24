//find the area of the triangle
#include<stdio.h>
void input(float *base, float *height);
void find_area(float *base , float *height, float *area);
void output(float base, float height, float area);
int main(){
 float base;
 float height;
 float area;
input(&base,&height);
find_area(&base,&height,&area);
output(base,height,area);
  return 0;
}
void input(float *base, float *height){
  printf("enter a number");
  scanf("%f",base);
  printf("enter a number");
  scanf("%f",height);
}
void find_area(float *base , float *height, float *area){
   *area = (*base * *height)/2;
}
void output(float base, float height, float area){
  printf("the area of the triangle is %f",area);
}
