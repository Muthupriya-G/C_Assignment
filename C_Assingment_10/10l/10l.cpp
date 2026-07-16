#include <stdio.h>

int main()
{
    int digits[50];
    char str[51];
    int n, i;

    printf("Enter the number of digits: ");
    scanf("%d", &n);

    printf("Enter %d digits:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &digits[i]);
    }
    for (i = 0; i < n; i++)
    {
        str[i] = digits[i] + '0';
    }
    str[n] = '\0';

    printf("Character array (String): %s\n", str);

    return 0;
}
