#include<stdio.h>
int main()
{
	int x=0,y=0;
	loop : if(x<7)
	{
		y=y+x;
		x++;
	    goto loop;
	}
		printf("\n %d",y);
}
