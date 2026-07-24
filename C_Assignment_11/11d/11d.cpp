#include <stdio.h>
void find_2digit_odd_sum7(int *arr, int *count)
{
    int num, sum;
    *count = 0;
    for(num = 10; num <= 99; num++)
    {
        if(num % 2 != 0)
        {
            sum = (num / 10) + (num % 10);

            if(sum == 7)
            {
                *(arr + *count) = num;   
                (*count)++;
            }
        }
    }
}
int main()
{
    int result[10];
    int count, i;
    find_2digit_odd_sum7(result, &count);
    printf("Two-digit odd numbers whose digit sum is 7:\n");
    for(i = 0; i < count; i++)
    {
        printf("%d ", *(result + i));   
    }

    return 0;
}
