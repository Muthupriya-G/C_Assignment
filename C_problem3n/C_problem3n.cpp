#include<stdio.h>
int main()
{
	int x,o,t,z,th,h,a;
	printf("Enter the 4 digit number:");
	scanf("%d",&x);
	th=x/1000;
	z=x%1000;
	h=z/100;
	a=x%100;
	t=a/10;
	o=x%10;
	if((th==t)&&(h==o)){
		printf("Success");
	}
	else{
		printf("Failure");
	}	
}
