#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main()
{
int n=input_n();
Triangle t[n];
input_n_triangles(n,t);
find_area(t);
find_n_areas(n,t);
Triangle smallest;
smallest=find_smallest_triangle(n,t);
output(n,t,smallest);
return 0;
}
int input_n(){
int n;
printf("enter the number of triangle");
scanf("%d",&n);
return n;
}
Triangle input_triangle(){
Triangle t;
printf("enter the base and height");
scanf("%f,%f",&t.base,&t.altitude);}
void input_n_triangles(int n, Triangle t[n]){
    int i;
for(i=1;i<=n;i++){
t[i]=input_triangle();}
}
void find_area(Triangle *t){
t->area=((t->base) * (t->altitude))/2;
}
void find_n_areas(int n, Triangle t[n]){
    int i;
for(i=1;i<=n;i++){
find_area(&t[i]);}
}
Triangle find_smallest_triangle(int n, Triangle t[n]){
    Triangle smallest;
  smallest.area=t[1].area;
  for (int i=0 ;i<n ;i++)
    {
        if (t[i].area <= smallest.area){
          smallest.area=t[i].area;

        }
    }
    return smallest;
}
void output(int n, Triangle t[n], Triangle smallest){
printf("the smallest triangle is  %d ",(int)smallest.area);}



