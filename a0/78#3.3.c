#include <stdio.h>
int main()
{
	double sx = 58,jx = 108.2,dq = 149.5, hx = 227.8,cm = 1.0e+010,in = cm * 0.3937008;

	printf(" \n                           ��̫���ľ���\n\n\
        ����       ������        ����         Ӣ��    \n\
        ˮ��           58        %8.2e    %8.2e  \n\
        ����        108.2        %8.2e    %8.2e  \n\
        ����        149.5        %8.2e    %8.2e  \n\
        ����        227.8        %8.2e    %8.2e  \n\
	",sx*cm,in*sx,cm*jx,in*jx,cm*dq,in*dq,cm*hx,in*hx);
}
