#include <stdio.h>
int main()
{
	int i;
	double horizleg,vertleg,area;

	horizleg = 5.0;
	vertleg = 7.0;

	for (i=1;i<=30;i++)
	{
		area = 0.5 * horizleg * vertleg;
		printf("Triangle area number %d = %6.2lf \n",i,area);
		horizleg += 1.0;
		vertleg *= 2.0;
	}
}
