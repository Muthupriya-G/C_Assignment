#include<stdio.h>
int main()
{
    int x = 1, y, z, count = 0;
    while(x < 100000)
    {
        y = x;
        z = 0;
        while(y!=0)
        {
            z=z+(y % 10);
            y=y/10;
        }
        if(z == 14)
        {
            count++;
        }

        x++;
    }

    printf("%d", count);

    return 0;
}
