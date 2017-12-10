#include <stdio.h>
int main()
{
	int month,year;
	double i,p;
	FILE *outpt;
	
	outpt = fopen("126#1aMONEY.OUT","wt");
	printf("Enter the annual interest rate\n");
	
	scanf("%lf",&i);
	
	p=5000.;
	
	for(year = 1;year<=5;year++)
	{
		for(month=1;month<=12;month+=2)
		{
			p *=(1+i/6);
			fprintf(outpt,"\n Year    = %d"
			    "\n Month   = %d"
				"\n Balance = %7.2lf \n\n",year,month,p);
		}
	}
	fclose(outpt);
}
