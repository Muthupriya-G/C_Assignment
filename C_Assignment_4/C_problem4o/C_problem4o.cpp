#include<stdio.h>
int main()
{
	int x,y,a,c=2,b=0;
	printf("Enter the number:");
	scanf("%d",&x);
	loop :if(c<x){
	a=x%c;
	if(a==0){
		b=1;
	} 
	c=c+1;
	goto loop;
}
	if(b==1){
		printf("Not Prime");
	}		
	else{
		printf("Prime");
	}
}

