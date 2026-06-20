#include<stdio.h>
int main()
{
	int x=10,y=0,t,o;
	loop : if(x<100)
	{
		if(x%2==1)
		{
			t=x/10;
		    o=x%10;
		    if(t+o==7)
		       printf("\n %d",x);
		
		}
		x++;
	    goto loop;
		
	}
		
}
