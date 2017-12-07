#include <stdio.h>
int main ()
{
	double x=1.;
	printf("    x       x*x      x+x");
	while(x<=10)
	{
		printf("\n  %4.1lf    %6.2lf    %5.2lf",x,x*x,x+x);
		x++;
	}
}
