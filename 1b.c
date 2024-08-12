#include <stdio.h>

void prefixSum(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], prefixSumArr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prefixSum(arr, n, prefixSumArr);

    printf("Prefix sum array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", prefixSumArr[i]);
    }

    return 0;
}
