#include <stdio.h>
#include <math.h>
int main()
{
	int j;
	double i,a,b,c,x1,x2,test,real,imag;
	for(j=1;j<=5;j++)
	{
		printf("Enter the values of a, b and c (each separated\n"
		"by a space) then press return\n");

		scanf("%lf %lf %lf",&a,&b,&c);

		test = b*b - 4*a*c;

		if(test>=0)
		{
			x1 = (-b+sqrt(test))/(2*a);
			x2 = (-b-sqrt(test))/(2*a);
			printf(" Real result:\n x1=%10.5f\n x2=%10.5f\n\n",x1,x2);
		}else
		{
			real = -b/(2*a);
			imag = sqrt(-test)/(2*a);
			printf(" Imaginary result:\n"
			     " x1=%10.5f %+1-.5f i\n x2=%10.5f %+1-.5f i\n\n",real,imag,real,-imag);
		}
	}
}
