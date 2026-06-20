#include<stdio.h>
int main()
{
	int x=0,y=0,t;
	loop : if(x<100)
	{
		if(x%2==1){
		t=x/10;
		if(t==7)
		{
			y=y+x;
		}
	}
		x++;
		goto loop;
	}
	printf("\n %d",y);
		
}
