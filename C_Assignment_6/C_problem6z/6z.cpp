#include<stdio.h>
int main(){
	int y,z,b,d=0;
	printf("Enter the number:");
	scanf("%d",&y);
	while(y!=0 && y!=1)
	{
			z=y%100;
		    b=y/10;
		    y=b;
		    if(z%2 == 1){
			    d++;
		   }
		}
			
	printf("%d",d);
}


