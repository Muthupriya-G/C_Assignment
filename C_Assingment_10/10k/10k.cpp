#include <stdio.h>
int main(){
    char num[51];
    int digits[50];
    int i = 0;
	printf("Enter a number (up to 50 digits): ");
    scanf("%50s", num);
    while (num[i] != '\0')
    {
        digits[i] = num[i] - '0';
        i++;
    }
    printf("Integer array:\n");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", digits[j]);
    }
    printf("\n");
    return 0;
}
