#include<stdio.h>
#include<math.h>
int main(){
float x;
float y;
printf("Enter the value of x:\n");
scanf("%.1f\n", &x);
y= (x*x);
printf("%.1f\n", y, sqrt(x));
return 0;
}