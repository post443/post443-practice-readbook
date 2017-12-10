#include <stdio.h>
int main()
{
	int month,year,week;
	double i,p;
	FILE *outpt;

	outpt = fopen("126#1dMONEY.OUT","wt");
//	printf("Enter the annual interest rate\n");

//	scanf("%lf",&i);

	i=0.05;
	p=10000.;

	for(year = 1;year<=8;year++)
	{
		for(month=1;month<=12;month++)
		{
			for(week=1;week<=4;week++)
			{
				p *=(1+i/12/4);
			}
			if(month ==6||month==12)
			{
				fprintf(outpt,"\n Year    = %d"
			    "\n Month   = %d"
				"\n Balance = %7.2lf \n\n",year,month,p);
			}
		}
	}
	fclose(outpt);
}
