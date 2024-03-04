#include<stdio.h>
int main(){
float a, b, c, d, e, f, g;
float grossPay, taxes, netPay;
//40hrs per week
a=40.0;
//10000per hr payment
b=10000.0;
//tax in percentage
c=(15.0/100.0);
//monthly hours
d=(4.0*40.0);
// total monthly pay or grossPay
e=(d*b);
//taxes withheld = (taxable income-deductions)*tax rate
f=(c*e);
//net pay=gross pay-(deductions+taxes);
g= (e-f);
grossPay=e;
taxes=f;
netPay=g;
printf("The grossPay is %.1f\n", grossPay);
printf("The netPay is %.1f\n", netPay);
printf("The tax rate is %.1f\n", taxes);
 
    return 0;
}