#include <stdio.h>
#include <string.h>

void getnumbers(char *number1, char *number2);
void addnumbers(char *number1, char *number2, char *result);
void print(char *result);

int main()
{
    char number1[51], number2[51], result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}

void getnumbers(char *number1, char *number2)
{
    printf("Enter first number: ");
    scanf("%50s", number1);

    printf("Enter second number: ");
    scanf("%50s", number2);
}

void addnumbers(char *number1, char *number2, char *result)
{
    int len1 = strlen(number1);
    int len2 = strlen(number2);

    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;
    int carry = 0;

    char temp[52];

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? *(number1 + i) - '0' : 0;
        int digit2 = (j >= 0) ? *(number2 + j) - '0' : 0;

        int sum = digit1 + digit2 + carry;

        *(temp + k) = (sum % 10) + '0';
        carry = sum / 10;

        i--;
        j--;
        k++;
    }

    int p = 0;
    while (k > 0)
    {
        *(result + p) = *(temp + k - 1);
        p++;
        k--;
    }

    *(result + p) = '\0';
}

void print(char *result)
{
    printf("Sum = %s\n", result);
}
