#include<stdlib.h>
int main()
{
    int z[10]={0};
    int n;
    printf("input your figure:");
    scanf("%d", &n);
    int a;
    while(n>0){
        a=n%10;
        if(z[a]==1)
        break;
    z[a]=1;
    n=n/10;

    }

    if(n>0){
        printf("yes");
    }
    else{
        printf("no");

    }
    return 0;
}