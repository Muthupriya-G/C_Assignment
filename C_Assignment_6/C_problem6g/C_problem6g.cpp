#include<stdio.h>
int main()
{
	int y,z=10,a,b,c=0;
	while(z<100)
	{
	   y=z%2;
	   if(y==1){
	       a=z%10;
	       b=z/10;
	       c=b+a;
	       if(c==7)
	       {
		      printf("%d\n",z);
	        }
        }
	z++;
		
	}
		
}
