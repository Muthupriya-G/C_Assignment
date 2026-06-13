#include<stdio.h>
int main(){
	int x,i,y,z,a=0,b;
	printf("Enter the two digit number:");
	scanf("%d",&x);
	y=x%2;
	b=x;
	if(y==0){
	for(i=0;i<2;i++)
	{
		z=b%10;
		y=b/10;
		b=y;
		a=a+z;
}
	}
	if(a==6){
		printf("%d",x);
	}
	else{
		printf("Nothing");
	}		
	
}
