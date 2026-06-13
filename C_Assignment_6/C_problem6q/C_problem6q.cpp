#include<stdio.h>
int main()
{
	int x,y,a,c=2,b=0,i=1,j=0,z,d,e,f;
	printf("Enter the number:");
	scanf("%d",&x);
	f=x;
	while(y!=0){
		y=x/10;
	if(y==0){
		printf("%d",i);
		}
			x=y;
		i++;
		}
	while(c<x){
	a=x%c;
	if(a==0){
		b=1;
}
       c++;
}
while(j<i)
{
        z=f%10;
		d=f/10;
		e=d+z;
		//x=d;
		j++;
		//printf("%d",e);
}
if(b==1){
		printf("Not Prime\n");
		if(e== 14){
			printf("The number is  prime but sum 14:%d\n",f);
		}
		else{
			printf("The number is Not prime & sum is not 14:%d\n",f);
		}
	}		
else{
		printf("Prime\n");
		if(e == 14){
			printf("The number is  prime but sum 14:%d\n",f);
		}
		else{
			printf("The number is Not prime & sum is not 14:%d\n",f);
		}
	}
}

