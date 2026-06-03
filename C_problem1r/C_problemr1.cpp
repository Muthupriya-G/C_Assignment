#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x-5;
	z=y%2;
    switch (z)
    	{
    	case 0:
			printf("The number is even:%d",y);
			break;
		case 1:
		    printf("The number is odd:%d",x);
		    break;
	}
}
