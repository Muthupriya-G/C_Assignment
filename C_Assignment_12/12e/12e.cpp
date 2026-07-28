#include <stdio.h>
#include <string.h>

void getnumbers(char *num1, char *num2);
void multiplynumbers(char *num1, char *num2, char *result);
void print(char *result);

int main()
{
    char number1[51], number2[51], result[102];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);

    return 0;
}

void getnumbers(char *num1, char *num2)
{
    printf("Enter first number: ");
    scanf("%50s", num1);

    printf("Enter second number: ");
    scanf("%50s", num2);
}

void multiplynumbers(char *num1, char *num2, char *result)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int res[102] = {0};

    int i, j;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (*(num1 + i) - '0') * (*(num2 + j) - '0');
            int sum = res[i + j + 1] + mul;

            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }

    int k = 0;
    int start = 0;

    while (start < len1 + len2 - 1 && res[start] == 0)
        start++;

    while (start < len1 + len2)
    {
        *(result + k) = res[start] + '0';
        k++;
        start++;
    }

    *(result + k) = '\0';
}

void print(char *result)
{
    printf("Product = %s\n", result);
}
