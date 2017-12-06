#include <stdio.h>
int main()
{
	double sx = 58,jx = 108.2,dq = 149.5, hx = 227.8,cm = 1.0e+010,in = cm * 0.3937008;

	printf(" \n                           到太阳的距离\n\n\
        行星       百万公里        厘米         英寸    \n\
        水星           58        %8.2e    %8.2e  \n\
        金星        108.2        %8.2e    %8.2e  \n\
        地球        149.5        %8.2e    %8.2e  \n\
        火星        227.8        %8.2e    %8.2e  \n\
	",sx*cm,in*sx,cm*jx,in*jx,cm*dq,in*dq,cm*hx,in*hx);
}
