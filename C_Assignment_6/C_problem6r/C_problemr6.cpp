#include<stdio.h>
int main(){
	int x,y,z,i=0,a=0,j=2,b=0;
	printf("Enter the number:");
	scanf("%d",&x);
	z=x;
	while(i<2){
		if(i==0){
				y=x%10;
				z=x/10;
				a=a+y;
		}
		else{
			y=z%10;
			a=a+(y*10);
		}
		i++;
	}
	//printf("%d",a);
	while(j<a){
		y=a%j;
		if(y==0){
			b=1;
		}
		j++;
	}
	if(b==1){
		printf("Not Prime");
	}
	else{
		printf("prime");
		
	}
}

