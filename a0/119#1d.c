#include <stdio.h>
int main()
{
	int i;
	double h,l1,l2,area;

	l1 = 50.0;
	l2 = 8.0;
	h = 32.0;

	for (i=1;i<=20;i++)
	{
		area = 0.5 * h * (l1+l2);
		printf("ÌÝÐÎ %2d Ãæ»ý £º%6.2lf \n",i,area);
		
		l1 *= 0.97;
		l2 *= 1.08;
		h  *= 1.02;
	}
}
