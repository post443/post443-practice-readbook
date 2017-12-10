#include <stdio.h>
int main()
{
	int week,year;
	double i,p;
	FILE *outpt;

	outpt = fopen("126#1bMONEY.OUT","wt");
	printf("Enter the annual interest rate\n");

	scanf("%lf",&i);

	p=5000.;

	for(year = 1;year<=5;year++)
	{
		for(week=1;week<=52;week++)
		{
			p *=(1+i/52);
			fprintf(outpt,"\n Year    = %d"
			    "\n Week    = %d"
				"\n Balance = %7.2lf \n\n",year,week,p);
		}
	}
	fclose(outpt);
}
