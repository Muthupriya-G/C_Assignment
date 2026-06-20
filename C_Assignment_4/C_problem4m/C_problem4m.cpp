#include<stdio.h>
int main()
{
    int x,y,z=0,a,b,p=1,result;

    printf("Enter the number:");
    scanf("%d",&x);

    y=x;
    b=x%10;      

loop:
    if(y>=10)
    {
        y=y/10;
        z=z+1;
        p=p*10;
        goto loop;
    }

    a=y;         
    result = b*p + ((x%p)/10)*10 + a;

    printf("%d",result);
}
