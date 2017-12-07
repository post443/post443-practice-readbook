#include <stdio.h>
int main ()
{
	double sum = 0.0;
	int i=3,a=-1;
	printf("1 - ");
	while(i<=15)
	{

		sum += 1*a/i;
		printf("1/%d",i);
		i+=2;
		
				a *= -1;
		if(a>0)
			printf(" + ");
		else
			printf(" - ");
		
	}
	printf("бн");
}
