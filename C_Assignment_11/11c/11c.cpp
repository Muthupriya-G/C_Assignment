#include <stdio.h>
void arrange_ascend(int *ptr, int size){
int i;
for(i = 0; i < size; i++){
        printf("%d\n", *(ptr + i));
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    arrange_ascend(arr, 5);

    return 0;
}
