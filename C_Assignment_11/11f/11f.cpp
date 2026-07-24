#include <stdio.h>
void memcopy(int *src, int *dst, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        *(dst + i) = *(src + i);
    }
}
int main()
{
    int src[] = {10, 20, 30, 40, 50};
    int dst[5];
    int i, size;
    size = sizeof(src) / sizeof(src[0]);
    memcopy(src, dst, size);
    printf("Source Array:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", *(src + i));
    }
    printf("\n\nDestination Array:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", *(dst + i));
    }

    return 0;
}
