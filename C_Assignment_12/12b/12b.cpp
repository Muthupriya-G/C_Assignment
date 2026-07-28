#include <stdio.h>

void getInput(char *str, char *ch);
void findPosition(char *str, char ch);

int main()
{
    char str[100];
    char ch;

    getInput(str, &ch);
    findPosition(str, ch);

    return 0;
}

void getInput(char *str, char *ch)
{
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", ch);
}

void findPosition(char *str, char ch)
{
    int pos = 1;
    int found = 0;

    printf("Character '%c' found at position(s): ", ch);

    while (*str != '\0')
    {
        if (*str == ch)
        {
            printf("%d ", pos);
            found = 1;
        }
        str++;
        pos++;
    }

    if (!found)
    {
        printf("Not Found");
    }

    printf("\n");
}
