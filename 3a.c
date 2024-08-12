#include<stdio.h>
#include<time.h>

void selection(int*, int);
void insertion(int*, int);
void revselection(int*, int);

int main() {
    int n, i;
    clock_t t1, t2;
    double t;
    
    printf("Enter the number of elements you want to have in the array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selection(a, n);
    t1 = clock(); // Time before insertion sort begins
    insertion(a, n);
    t2 = clock(); // Time after insertion sort ends
    t = ((double)(t2 - t1)) / CLOCKS_PER_SEC; // Time taken by insertion sort in the best case
    printf("\nBest case time is %lf", t);

    revselection(a, n);
    t1 = clock(); // Time before insertion sort begins
    insertion(a, n);
    t2 = clock(); // Time after insertion sort ends
    t = ((double)(t2 - t1)) / CLOCKS_PER_SEC; // Time taken by insertion sort in the worst case
    printf("\nWorst case time is %lf", t);

    return 0;
}

void selection(int *a, int n) {
    int i, j, minind, temp;
    for (i = 0; i < n - 1; i++) {
        minind = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minind]) {
                minind = j;
            }
        }
        if (minind != i) {
            temp = a[i];
            a[i] = a[minind];
            a[minind] = temp;
        }
    }
}

void insertion(int *arr, int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void revselection(int *a, int n) {
    int i, j, maxind, temp;
    for (i = 0; i < n - 1; i++) {
        maxind = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[maxind]) {
                maxind = j;
            }
        }
        if (maxind != i) {
            temp = a[i];
            a[i] = a[maxind];
            a[maxind] = temp;
        }
    }
}
