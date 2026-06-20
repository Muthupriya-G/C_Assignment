#include<stdio.h>
int main()
{
	int x,o,t;
	printf("Enter the 3 digit number:");
	scanf("%d",&x);
	x=x%100;
	t=x/10;
	o=x%10;
	if(t==o){
		printf("Success");
	}
	else{
		printf("Failure");
	}	
}
