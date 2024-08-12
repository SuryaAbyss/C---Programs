#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void calculateGCD() {
    int n;
    printf("Enter the number of pairs of numbers: ");
    scanf("%d", &n);

    int a, b;
    for (int i = 0; i < n; i++) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        int result = gcd(a, b);
        printf("The GCD of %d and %d is %d\n", a, b, result);
    }
}

int main() {
    calculateGCD();
    return 0;
}