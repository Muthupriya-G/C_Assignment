#include<stdio.h>
int main()
{
    int x,y,z=0,a,p=1;

    printf("Enter the number:");
    scanf("%d",&x);

    y=x;

loop:
    if(y>=10)
    {
        y=y/10;
        z=z+1;
        p=p*10;
        goto loop;
    }

    a=y;   

    if(a%2!=0)
    {
        x=x-p;   
    }

    printf("%d",x);
}


