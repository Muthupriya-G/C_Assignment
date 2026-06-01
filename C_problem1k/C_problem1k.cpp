#include<stdio.h>
int main()
{
	int x,y,z,o,t,h;
	printf("Enter the three digit number: ");
	scanf("%d",&x);
	z=x%100;
	o=x%10; // one's digit
	t=z/10;// ten's digit
	h=x/100;// hundred's digit
	y=o+t+h;
	printf("The sum  is: %d",y);
}
