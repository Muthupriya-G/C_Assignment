#include <stdio.h>

void getString(char *str);
int countWords(char *str);

int main()
{
    char str[100];
    int words;

    getString(str);
    words = countWords(str);

    printf("Number of words = %d\n", words);

    return 0;
}

void getString(char *str)
{
    printf("Enter a string: ");
    gets(str);
}

int countWords(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if ((*str != ' ') && (*(str + 1) == ' ' || *(str + 1) == '\0'))
        {
            count++;
        }
        str++;
    }

    return count;
}
