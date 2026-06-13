#include<stdio.h>
int main()
{
	int x,y,t,o,z,th,h,a;
	printf("Enter the 4 digit number:");
	scanf("%d",&x);
	th=x/1000;//thousands digit
	z=x%100;
	a=x%1000;
	h=a/100;
	t=z/10;//tens digit
	o=x%10;//ones digit
	y = ((th == t) && (h == o)) ? 1 : 0;
	printf("The Result is: %d",y);
}
