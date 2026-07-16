#include <stdio.h>
int main(){
    char num[51];
    int i = 0;
    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", num);
    while (num[i] != '\0')
    {
        i++;
    }
    printf("Reversed number: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
    
	printf("\n");

    return 0;
}
