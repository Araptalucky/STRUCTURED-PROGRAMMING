# include<stdio.h>

const int NUM = 8;
void main ()

{
int nums[NUM];
int total =0;// hold total of user's eight numbers.

int ctr;
for (ctr=0; ctr<NUM; ctr++);
{
printf("Please enter the next numbers....");
scanf("%d",&nums[ctr]);
total+=nums[ctr];
}

printf("The total of the numbers is ",total"\n");

return ;
}