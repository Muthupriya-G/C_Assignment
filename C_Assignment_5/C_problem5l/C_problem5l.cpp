#include<stdio.h>
int main(){
	int x,i,y,z,a=0,b,n,c;
	printf("Enter the  number:");
	scanf("%d",&x);
	b=x;
	for(n=1;y!=0;n++)
	{
		y=x/10;
		if(y==0){
			printf("number of digits:%d\n",n);
		}
		x=y;
	}
		for(i=0;i<n;i++)
	{
		z=b%10;
		c=b/10;
		//printf("the 0 the digit :%d %d\n",z,c);
		b=c;
		a=a+z;
		}
		printf("Sum :%d",a);	
	}
