#include <stdio.h>

// Function to concatenate two integer arrays
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;

    // Copy first array
    for(i = 0; i < size1; i++)
    {
        *(dst + i) = *(src1 + i);
    }

    // Copy second array
    for(i = 0; i < size2; i++)
    {
        *(dst + size1 + i) = *(src2 + i);
    }
}

int main()
{
    int src1[] = {10, 20, 30};
    int src2[] = {40, 50, 60};
    int dst[6];
    int i;

    int size1 = sizeof(src1) / sizeof(src1[0]);
    int size2 = sizeof(src2) / sizeof(src2[0]);

    // Call the function
    intcon(src1, size1, src2, size2, dst);

    printf("Concatenated Array:\n");

    for(i = 0; i < size1 + size2; i++)
    {
        printf("%d ", *(dst + i));
    }

    return 0;
}
