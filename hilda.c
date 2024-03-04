#include<stdio.h>
#include<math.h>
int main(){
    float x;
    float y;
    printf("Enter the value of x:");
    scanf("%f",&x);
    y= sqrt(x);
    printf("The square root of x is %.2f", y);
    return 0;
}
