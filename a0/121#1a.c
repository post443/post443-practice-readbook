#include <stdio.h>
int main()
{
	int degF;
	double degC;

	printf("Table of Celsius and Fahrenheit Degress \n\n"
			"Degress    	Degress		\n"
			"Fahrenheit     Celsius     \n");

	for (degF = 250; degF<=1300;degF+=5)
	{
		degC  = (degF - 32 )/1.8;
		printf ("%5d    %7.2f\n", degF,degC);
	}
}
