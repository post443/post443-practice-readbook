#include <stdio.h>
int main()
{
	double horizleg,vertleg,area;
	horizleg = 5.0;
	vertleg  = 7.0;
	area     = 0.5 * horizleg * vertleg;
	printf(" \n��һ�������ε������%6.2f \n",area);
	

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("�ڶ��������ε������%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("�����������ε������%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("���ĸ������ε������%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("����������ε������%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("�����������ε������%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("���߸������ε������%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("�ڰ˸������ε������%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("�ھŸ������ε������%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area     = .5 * horizleg * vertleg;
	printf("��ʮ�������ε������%6.2f \n",area);
}
