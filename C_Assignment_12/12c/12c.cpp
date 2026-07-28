#include <stdio.h>

void getInput(char *mainStr, char *subStr);
void findSubstring(char *mainStr, char *subStr);

int main()
{
    char mainStr[100], subStr[100];

    getInput(mainStr, subStr);
    findSubstring(mainStr, subStr);

    return 0;
}

void getInput(char *mainStr, char *subStr)
{
    printf("Enter the main string: ");
    scanf("%s", mainStr);

    printf("Enter the substring: ");
    scanf("%s", subStr);
}

void findSubstring(char *mainStr, char *subStr)
{
    char *p = mainStr;
    char *q, *r;
    int pos = 1;
    int found = 0;

    while (*p != '\0')
    {
        q = p;
        r = subStr;

        while (*q == *r && *r != '\0')
        {
            q++;
            r++;
        }

        if (*r == '\0')
        {
            printf("Substring found at position: %d\n", pos);
            found = 1;
            break;
        }

        p++;
        pos++;
    }

    if (!found)
    {
        printf("Substring not found.\n");
    }
}
