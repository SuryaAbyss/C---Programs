#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

void writeBinary() {
    int n, num;
    printf("Enter the number of decimal numbers you want to convert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        printf("The binary equivalent of %d is ", num);
        
        int bits = sizeof(int) * 8;
        int mask = 1 << (bits - 1);
        int leadingZero = 1;

        for (int j = 0; j < bits; j++) {
            if ((num & mask) != 0) {
                leadingZero = 0;
            }
            if (!leadingZero) {
                printf("%d", (num & mask) != 0);
            }
            mask >>= 1;
        }

        if (leadingZero) {
            printf("0");
        }
        
        printf("\n");
    }
}

int main() {
    writeBinary();
    return 0;
}
