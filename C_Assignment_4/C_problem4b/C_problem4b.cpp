#include<stdio.h>
int main()
{
	int x=5;
	loop : if(x>0)
	{
		printf("\n %d",x);
		x--;
		goto loop;
	}
}
