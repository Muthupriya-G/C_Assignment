#include <stdio.h>
void strcpy(char *src, char *dst)
{
    while(*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }

    *dst = '\0'; 
}

int main()
{
    char src[100], dst[100];
    printf("Enter a string: ");
    scanf("%s", src);
    strcpy(src, dst);
    printf("Source String      : %s\n", src);
    printf("Destination String : %s\n", dst);
    return 0;
}
