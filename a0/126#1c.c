#include <stdio.h>
int main()
{
	int month,year;
	double i,p;
	FILE *outpt;

	outpt = fopen("126#1cMONEY.OUT","wt");
	printf("Enter the annual interest rate\n");

	scanf("%lf",&i);

	p=5000.;

	for(year = 1;year<=10;year++)
	{
		for(month=1;month<=12;month++)
		{
			p *=(1+i/12);
			fprintf(outpt,"\n Year    = %d"
			    "\n Month   = %d"
				"\n Balance = %7.2lf \n\n",year,month,p);
		}
	}
	fclose(outpt);
}
