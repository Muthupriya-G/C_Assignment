//Add two integer arrays of up to 50 digits and store the result in a 51-digit array
#include <stdio.h>
int main(){
    int arr1[50], arr2[50], result[51];
    int n, i;
    printf("Enter the number of elements (max 50): ");
    scanf("%d", &n);
    if(n > 50)
    {
        printf("Maximum size is 50.\n");
        return 0;
    }
    printf("Enter the elements of first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of second array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
    printf("Resultant array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}
