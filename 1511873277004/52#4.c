#include <stdio.h> 
int main ()
{
	int a = 10,b = 20,c = 30,temp;
	temp = a;
	a = c;
	c = b;
	b = temp;
	printf("a = %d\nb = %d\nc = %d",a,b,c);
}
