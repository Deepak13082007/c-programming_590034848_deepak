// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100];
    int sum = 0, maxSum;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input subarray size
    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    // Calculate the sum of the first k elements
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    // Sliding window technique
    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);

    return 0;
}