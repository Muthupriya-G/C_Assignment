#include<stdio.h>
int main()
{
	int x=10,y=0;
	loop : if(x<20)
	{
		if(x%2==1)
		printf("\n %d",x);
		x++;
	    goto loop;
	}
		
}
