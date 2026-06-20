#include<stdio.h>
int main()
{
	int x=1;
	loop : if(x<6)
	{
		printf("\n %d",x);
		x++;
		goto loop;
	}
}
