#include <stdio.h>
int main()
{
	double sum =0;
	int n=1,sign=1;
	do
	{
		sum = sum + sign*1.0/n;
		n = n+2;
		sign = -sign;
	}while(1.0/n>=0.0001);
	printf("¦Ð/4¡Ö%.4f\n",sum);
	return 0;
}
