//Adjust the carry in an integer array. (i.e. convert the 2-digit number into single digits and add the carry to the next number)
#include <stdio.h>
int main(){
    int n, i;
	printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i] >= 10)
        {
            arr[i+1] = arr[i+1] + (arr[i] / 10);
            arr[i] = arr[i] % 10;
        }
    }

    printf("Adjusted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
