#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	double sum,agv,vari,s;
	for(i=1;i<=10;i++)
	{
		sum += i;
	}
	agv = sum/i;
	sum = 0;
	for (i=1;i<=10;i++)
	{
		sum += (i-agv)*(i-agv);
	}
	vari = sum/i;
	s = sqrt(vari);
	printf("ǰʮ������ƽ��ֵΪ��%6.2lf\n\
            ����Ϊ��%6.2lf\n\
        ��׼����Ϊ��%6.2lf",agv,vari,s);
}
