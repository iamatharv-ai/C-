#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x*x - x - 10)
#define d(x) (4*x*x*x - 1)
main()
{ 
  float x0,x1, e = 0.001,f1,d1;
printf("Enter the value of x0=") ;
scanf("%f", &x0);
f1= f(x0);
d1=d(x0);
x1=x0-(f1/d1);
while (fabs(f(x1))>e)
{
  x0=x1;
  f1=f(x0);
  x1=x0-(f1/d1);
}
printf("The root of given equation x1=\%f" ,x1);
getch();
}