#include <stdio.h>
int main ()
{
	int sum=1,x;
	do
	{
		sum *= x++;
		printf("%d\n",sum);
	}while(x<=8);
}
