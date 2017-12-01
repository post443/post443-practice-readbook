#include <stdio.h> 
int main()
{
	int A=12345;
	float B = 9876.54321; 
	printf("%d -- %0d -- %+d -- %-d\n",A,A,A,A);
	printf("%1d -- %2d -- %5d -- %8d\n",A,A,A,A);
	printf("%.1d -- %.2d -- %.3d -- %.8d\n",A,A,A,A);
	printf("%10.2f -- %010.2f -- %+10.2f -- %-10.2f\n",B,B,B,B);
	printf("%10.2f -- %12.2f -- %15.2f -- %8.2f\n",B,B,B,B);
	printf("%10.2f -- %10.4f -- %10.5f -- %10.6f\n",B,B,B,B);
}
