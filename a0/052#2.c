#include <stdio.h> 
#define PI 3.1415926
int main()
{
	int a1,R,a,b,b1,c1,c,d,e,f,g,h;
	float a2,a3;
	a1 = 1 + 1/3 +1/5 + 1/7;
	printf("%d",a1);
	
	a2 = 1 +1/2.0 + 1/3.0 + 1/4.0;
	printf("\n%f",a2);
	
	R = 5;
	a3 = PI * R * R;
	printf("\n%f",a3) ;
	
	a = 5;
	b = 3;
	
	b1 = (a+b)*(a+b)/((a-b)*(a-b)*(a-b));
	printf("\n%d",b1);
	
	c = d = e = f = g = h = 10;
	c1 = a + b/c/((d+e/f)/g*h*h);
	printf("\n%d",c1);
	
}
