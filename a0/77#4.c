#include <stdio.h>
void main(void)
{
	double horizleg,vertleg,area;
	int i=1;
	
	horizleg = 5.0;
	vertleg  = 7.0;
	area     = 0.5 * horizleg * vertleg;
	printf(" \n��%2d�������ε������%8.2f \n",i,area);

    for(i=2;i<=10;i++)
    {
    	horizleg += 1.;
		vertleg  *= 2.;
		area      = .5 * horizleg * vertleg;
		printf("��%2d�������ε������%8.2f \n",i,area);
    }
}
