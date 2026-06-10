#include<stdio.h>
int main()
{
	int x,y,a,c=2,b=0;
	printf("Enter the number:");
	scanf("%d",&x);
	for(c=2;c<x;c++)
	{
	a=x%c;
	if(a==0){
		b=1;
	} 
}
	if(b==1){
		printf("Not Prime");
	}		
	else{
		printf("Prime");
	}
}

