#include<stdio.h>
int main()
{
	int x,y,a,c=2,b=0;
	printf("Enter the number:");
	scanf("%d",&x);
	while(c<x)
	{
	a=x%c;
	if(a==0){
		b=1;
	} 
	c++;
}
	if(b==1){
		printf("Not Prime");
	}		
	else{
		printf("Prime");
	}
}

