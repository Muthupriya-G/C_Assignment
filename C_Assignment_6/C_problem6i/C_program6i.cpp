#include<stdio.h>
int main()
{
	int y=0,z=10,a;
	while(z<100)
	{
	   a=z%10; 
	   if(a == 5){
	   	    y=y+z;
	   }
	   z++;
	}
	printf("%d",y);
}
