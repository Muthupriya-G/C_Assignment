#include<stdio.h>

int main()
{
    int x,c,y,z=0;
	for(c=1;c<=9;c++)
    {
        y=0;
		for(x=1;x<=c;x++)
        {
            if(c%x==0)
            {
                y++;
            }
        }
		if(y==2)
        {
            z++;
        }
    }

    printf("%d", z);

    return 0;
}
