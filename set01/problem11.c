#include<stdio.h>
struct _complex {
	 float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main(){
  Complex a=input_complex();
  Complex b=input_complex();
  Complex sum;
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}
Complex input_complex(){
  Complex c;
  printf("enter imaginary and real number\n");
scanf("%f,%f",&real.c,&c.imaginary);
  return c;
}
Complex add_complex(Complex a, Complex b){
  Complex sum;
  real.sum= real.a+real.b;
  sum.imaginary = imaginary.a+imaginary.b;
  return sum;
}
void output(Complex a, Complex b, Complex sum){
  printf("the sum is %f",sum.real);
  printf("the sum is%f",sum.imaginary);
}

