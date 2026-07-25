#include <stdio.h>
void strcmp(char *src, char *dst)
{
    while(*src != '\0' && *dst != '\0')
    {
        if(*src != *dst)
        {
            printf("Failure\n");
            return;
        }

        src++;
        dst++;
    }
    if(*src == '\0' && *dst == '\0')
        printf("Success\n");
    else
        printf("Failure\n");
}

int main()
{
    char src[100], dst[100];
    printf("Enter first string: ");
    scanf("%s", src);
    printf("Enter second string: ");
    scanf("%s", dst);
    strcmp(src, dst);
    return 0;
}
