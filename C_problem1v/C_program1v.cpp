#include<stdio.h>
int sumofdigits(int x)
{
	int y,z,o,t,h;
	z=x%100;
	o=x%10; // one's digit
	t=z/10;// ten's digit
	h=x/100;// hundred's digit
	y=o+t+h;
}
int main()
{
	int x,y,z,o,t,h;
	printf("Enter the three digit number: ");
	scanf("%d",&x);
	y=sumofdigits(x);
	if (y<10){
		printf("The number is: %d",y);
	}
	else{
		t=sumofdigits(y);
		if(t<10)
		{
			printf("The number is: %d",t);
		}
		else{
			z=sumofdigits(t);
			printf("The number is: %d",z);
		}
	}
	
}
