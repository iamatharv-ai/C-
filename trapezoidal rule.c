#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x) {
    return sqrt(1 - x * x);
}
void main() {
    float x0, xn, h, s1, s2 = 0, I, x;
    int i, n;
    printf("\n Enter the value of x0 = ");
    scanf("%f", &x0); 
    printf("\n Enter the value of xn = ");
    scanf("%f", &xn);
    printf("\n Enter the value of n = ");
    scanf("%d", &n);
    h = (xn - x0) / n;
    s1 = f(x0) + f(xn);
    for (i = 1; i <= (n - 1); i++) {
        x = x0 + (i * h);
        s2 = s2 + f(x);
    }
    I = (h / 2) * (s1 + (2 * s2));
    printf("\n The integration of the given function is I = %f", I);
    getch();
}