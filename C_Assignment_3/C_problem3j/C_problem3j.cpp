#include<stdio.h>
int main()
{
	int x,o,t;
	printf("Enter the 2 digit number:");
	scanf("%d",&x);
	t=x/10;
	o=x%10;
	if(t<o){
		printf("Success");
	}
	else{
		printf("Failure");
	}
}
