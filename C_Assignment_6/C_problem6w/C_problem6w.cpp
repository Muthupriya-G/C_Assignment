#include<stdio.h>
int main(){
	int y,z,b,d=0;
	printf("Enter the number:");
	scanf("%d",&y);
	while(y!=0)
	{
			z=y%100;
		    b=y/10;
		    y=b;
		    if(z == 16 || z == 25 || z == 36 ||z == 49 || z == 64 || z == 81){
			    d++;
		   }
		}
			
	printf("%d",d);
}


