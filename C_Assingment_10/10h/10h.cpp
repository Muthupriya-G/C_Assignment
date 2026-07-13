#include <stdio.h>

int main() {
    char num[51];
    int i, valid = 1;

    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", num);

    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9') {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid number\n");
    else
        printf("Invalid number\n");

    return 0;
}
