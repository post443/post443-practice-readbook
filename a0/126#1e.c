#include <stdio.h>
int main()
{
	int month,year;
	double i,p;
	FILE *outpt;

	outpt = fopen("126#1eMONEY.OUT","wt");
	printf("Enter the annual interest rate\n");

	scanf("%lf",&i);
	fprintf(outpt,"Five-year monthly bank balance\n"
	"Annual interest rate = %.1f%c  \n"
	"  Year    Month    Balance",i*100,'%');
	p=5000.;

	for(year = 1;year<=10;year++)
	{
		fprintf(outpt,"\n   %d  ",year);
		for(month=1;month<=12;month++)
		{
			p *=(1+i/12);
			if(month ==1)
				fprintf(outpt,"     %2d      %.2f\n",month,p);
			else
			    fprintf(outpt,"           %2d      %.2f\n",month,p);
		}
	}
	fclose(outpt);
}
