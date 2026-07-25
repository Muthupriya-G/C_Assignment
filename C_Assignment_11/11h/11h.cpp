#include <stdio.h>
void memcomp(int *src, int *dst, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(*(src + i) != *(dst + i))
        {
            printf("Failure\n");
            return;
        }
    }

    printf("Success\n");
}
int main()
{
    int src[] = {10, 20, 30, 40, 50};
    int dst[] = {10, 20, 30, 40, 50};
    int size = sizeof(src) / sizeof(src[0]);
    memcomp(src, dst, size);
    return 0;
}
