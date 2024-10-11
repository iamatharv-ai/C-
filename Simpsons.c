#include <stdio.h>
#include <stdlib.h>
float f(float x) {
    return 11.25 * x * x; 
}
int main() {
    float x0, xn, h, sum = 0, I;
    int i, n;
    printf("Enter the values of x0 and xn: ");
    scanf("%f %f", &x0, &xn);
    printf("Enter the value of n (must be even): ");
    scanf("%d", &n);
    if (n % 2 != 0) {
        printf("\nNumber of subdivisions should be even.\n");
        exit(0);
    }
    h = (xn - x0) / n;
    sum = f(x0) + f(xn);
    for (i = 1; i < n; i++) {
        float x = x0 + i * h;
        if (i % 2 == 0) {
            sum = sum + 2 * f(x);
        } else {
            sum = sum + 4 * f(x);
        }
    }
    I = (h / 3) * sum; 
    printf("\nValue of the integration is I = %f\n", I);
    return 0;
}