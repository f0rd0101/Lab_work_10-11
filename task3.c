#include <stdio.h>
#include <math.h>

int main(){
 float f, a=1, b=0, u=60, t=360, theta =1, first_exp , second_exp, third_exp;

 first_exp = a*b;
 second_exp = ((pow(a,b)) - cos (u)) /atan(t);
 third_exp = asin(pow(theta,4));
 f= first_exp + second_exp + third_exp;
 printf("Result of calculation equals:%.2f", f);
 return 0;
}