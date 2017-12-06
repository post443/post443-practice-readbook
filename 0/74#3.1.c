#include <stdio.h>
void main(void)
{
	double km,ma,yl,bkm = 0.001,bma = 1.094,byl = 0.0006215,m;
	printf("            奥林匹克田径距离表            \n");
	printf("    米        公里        码        英里    \n");
	
	m = 100.;
	km = m * bkm;
	ma = m * bma;
	yl = m * byl;
	printf("   %3.0f     %6.2f       %6.2f    %6.2f  \n",m,km,ma,yl);
	
	m = 200.;
	km = m * bkm;
	ma = m * bma;
	yl = m * byl;
	printf("   %3.0f     %6.2f       %6.2f    %6.2f  \n",m,km,ma,yl);
	
	m = 400.;
	km = m * bkm;
	ma = m * bma;
	yl = m * byl;
	printf("   %3.0f     %6.2f       %6.2f    %6.2f  \n",m,km,ma,yl);
	
	m = 800.;
	km = m * bkm;
	ma = m * bma;
	yl = m * byl;
	printf("   %3.0f     %6.2f       %6.2f    %6.2f  \n",m,km,ma,yl);
}
