#include<stdio.h>
int main()
{
	int y=0,z=10,a;
	while(z<100)
	{
	   if(z%2 == 1){
	   a=z/10; 
	   if(a == 7){
	   	    y=y+z;
	   }
	}
	   z++;
	}
	printf("%d",y);
}
