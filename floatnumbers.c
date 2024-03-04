#include<stdio.h>
it main(){
    //initialize the array
    float numbers[10]={}, result;
    int i, p, k; //definition of integer variables
    printf("The program take 10 float numbers and organize in decreasing order.\n\n");
    for(index=0; index<10; index++) // loop for input
    {
    printf("Enter elements",index);
    scanf("%f", &numbers[index]); // the input numbers are save in numbers[index]
    

    }
    //print message of the numbers the user enters
    printf("Numbers that you enter are: \n %f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",
    numbers[0],number[1],numbers[2], numbers[3],numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9]);

    //print a message in decreasing order
    printf("decreasing order:\n");
    for(index=10; index>=0;index--)// loop for compare the numbers enter
    {for(k=10; k>0; k--) //loop for comparing the numbers}
    return 0;
}