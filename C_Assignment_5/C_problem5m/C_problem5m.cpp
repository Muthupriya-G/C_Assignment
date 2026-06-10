#include<stdio.h>
int main(){
	int x,i,y,z,a=0,b,n,c;
	printf("Enter the  number:");
	scanf("%d",&x);
	b=x;
	for(n=1;y!=0;n++)
	{
		y=x/10;
		//if(y==0){
		//	printf("number of digits:%d\n",n);
		//}
		x=y;
	}
		for(i=1;i<n;i++)
	{
		z=b%10;
		c=b/10;
		printf("%d",z);
		b=c;
		}	
	}
