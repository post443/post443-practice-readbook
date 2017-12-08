#include <stdio.h>
int main()
{
	int inch = 1;
	double feet = 0.0833,metre = 0.0254;
	printf(" inch     feet      metre");
	for(inch;inch<=100;inch++)
	{
		printf("\n %-3d      %-.4lf    %-.4lf",inch,feet*inch,metre*inch);
	}
}
