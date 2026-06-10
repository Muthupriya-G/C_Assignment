#include<stdio.h>
int main()
{
	int x,y,a,c=2,b=0,i,j,z,d,e,f;
	printf("Enter the number:");
	scanf("%d",&x);
	f=x;
	for(i=1;y!=0;i++){
		y=x/10;
	if(y==0){
			printf("%d",i);
		}
		x=y;
}
	for(c=2;c<x;c++){
	a=x%c;
	if(a==0){
		b=1;
}
}
for(j=0;j<i;j++)
{
        z=x%10;
		d=x/10;
		e=e+z;
		x=d;
}
if(b==1){
		printf("Not Prime\n");
		if(e==14){
			printf("The number is Not prime but sum 14:%d\n",f);
		}
		else{
			printf("The number is Not prime & sum is not 14:%d\n",f);
		}
	}		
else{
		printf("Prime\n");
		if(e==14){
			printf("The number is Not prime but sum 14:%d\n",f);
		}
		else{
			printf("The number is Not prime & sum is not 14:%d\n",f);
		}
	}
}

