#include<stdio.h>
int main()
{
	int x=1,y=0;
	loop : if(x<6)
	{
		y=y+x;
		x++;
	    goto loop;
	}
		printf("\n %d",y);
}
