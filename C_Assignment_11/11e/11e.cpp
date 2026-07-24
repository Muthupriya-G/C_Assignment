#include <stdio.h>
void find_2digit_odd_sum7(int *p){
    int num, sum;

    for(num = 10; num <= 99; num++)
    {
        if(num % 2 != 0)  
        {
            sum = (num / 10) + (num % 10);

            if(sum == 7)
            {
                *p = num; 
                printf("%d ", *p);
            }
        }
    }
}

int main()
{
    int number;

    printf("Two-digit odd numbers whose sum of digits is 7 are:\n");

    find_2digit_odd_sum7(&number);

    return 0;
}
