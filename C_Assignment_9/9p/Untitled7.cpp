#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 50
#define RESULT_SIZE 51

void addLargeNumbers(int arr1[], int len1, int arr2[], int len2, int result[]) {
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = RESULT_SIZE - 1;

    // Add digits from right to left
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        
        if (i >= 0) {
            sum += arr1[i];
            i--;
        }
        if (j >= 0) {
            sum += arr2[j];
            j--;
        }

        result[k] = sum % 10;
        carry = sum / 10;
        k--;
    }

    // Fill remaining leading spaces with zeros
    while (k >= 0) {
        result[k] = 0;
        k--;
    }
}

int main() {
    // Example 50-digit inputs (stored as single digits)
    int arr1[MAX_DIGITS] = {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
    int arr2[MAX_DIGITS] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    
    int result[RESULT_SIZE];

    addLargeNumbers(arr1, MAX_DIGITS, arr2, MAX_DIGITS, result);

    // Find the first non-zero digit to avoid printing leading zeros
    int start = 0;
    while (start < RESULT_SIZE - 1 && result[start] == 0) {
        start++;
    }

    // Print the result
    printf("Result: ");
    for (int i = start; i < RESULT_SIZE; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}

