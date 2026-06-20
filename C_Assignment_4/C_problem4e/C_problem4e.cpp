#include<stdio.h>
int main()
{
	int x=0,y=0;
	loop : if(x<10)
	{
		if(x%2==1)
		printf("\n %d",x);
		x++;
	    goto loop;
	}
		
}
