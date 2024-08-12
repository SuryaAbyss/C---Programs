#include <stdio.h>

void exchange(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void rotateRight(int *arr, int p2) {
    int last = arr[p2 - 1];
    for (int i = p2 - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int n, p2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of elements to rotate: ");
    scanf("%d", &p2);

    printf("Before ROTATE: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateRight(arr, p2);

    printf("After ROTATE: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
