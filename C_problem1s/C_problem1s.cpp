#include<stdio.h>
int main()
{
	int x,y,z,a,b;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x-5;
	a=y/10;
	b=a%10;
	z=b%2;
    switch (z)
    	{
    	case 0:
			printf("The ten's digit is even:%d",x);
			break;
		case 1:
		    printf("The ten's digit is odd:%d",y);
		    break;
	}
}
