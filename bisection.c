#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
float f(float x);
int main()
{
    float x1, x2, x0, e;
    printf("\n Enter the value of x1=");
    scanf("%f", &x1);
    printf("\n Enter the value of x2=");
    scanf("%f", &x2);
    printf("\n Enter the value of e=");
    scanf("%f", &e);
    if (f(x1) * f(x2) > 0)
    {
        printf("The guess values are incorrect\n");
        getch();
        return 1;
    }
    do
    {
        x0 = (x1 + x2) / 2;
        if (f(x1) * f(x0) < 0)
            x2 = x0;
        else
            x1 = x0;
    } while (fabs(f(x0)) >= e);

    printf("\n The root of the given equation is x0 = %f\n", x0);
    getch();
    return 0;
}
float f(float x)
{
    return (x * x - 25);
}
