#include <stdio.h>

void incrementArray(int *ptr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        *(ptr + i) = *(ptr + i) + 1;
    }
}
int main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    incrementArray(arr, 5);
    printf("Array after increment:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
