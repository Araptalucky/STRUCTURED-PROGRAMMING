#include<stdio.h>
#include<math.h>
int main(){
    /*FahrenheitToCentigrade*/
float Fahrenheit, Centigrade;
printf("Enter the value of Fahrenheit:\n");
scanf("%f\n", &Fahrenheit);
Centigrade= 5.0/9.0*(Fahrenheit-32);
printf("Fahrenheit%f/ncentigrade%f/n");


return 0;
}