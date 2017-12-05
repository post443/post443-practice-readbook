#include <stdio.h>
int main()
{
	double v1,v2,v3,i1,i2,i3,r1,r2,r3;
	printf("For case 1, enter the voltage and current\n");
	scanf("%lf %lf",&v1,&i1);
	printf("For case 2, enter the current and resistance\n");
	scanf("%lf %lf",&i2,&r2);
	printf("For case 3, enter the voltage and resistance\n");
	scanf("%lf %lf",&v3,&r3);
	printf("\n    情形    V（福特）    I（安培）     R（欧姆）  \n\
     1       %7.2lf      %7.2lf       %7.2lf  \n\
     2       %7.2lf      %7.2lf       %7.2lf  \n\
     3       %7.2lf      %7.2lf       %7.2lf  \n",v1,i1,v1/i1,i2*r2,i2,r2,v3,v3/r3,r3);
}
