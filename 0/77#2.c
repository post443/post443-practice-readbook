#include <stdio.h>
int main()
{
	double horizleg,vertleg,area1,area2,area3,area4,area5,area6,area7,area8,area9,area10;
	FILE *triangleArea;
	horizleg = 5.0;
	vertleg  = 7.0;
	area1     = 0.5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area2      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area3      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area4      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area5      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area6      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area7      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area8      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area9      = .5 * horizleg * vertleg;

	horizleg += 1.;
	vertleg  /= 2.;
	area10     = .5 * horizleg * vertleg;

	triangleArea = fopen("triangleArea.t","w");
	fprintf(triangleArea," \n\
	��һ�������ε������%6.2f \n\
	�ڶ��������ε������%6.2f \n\
	�����������ε������%6.2f \n\
	���ĸ������ε������%6.2f \n\
	����������ε������%6.2f \n\
	�����������ε������%6.2f \n\
	���߸������ε������%6.2f \n\
	�ڰ˸������ε������%6.2f \n\
	�ھŸ������ε������%6.2f \n\
	��ʮ�������ε������%6.2f \n\
		",area1,area2,area3,area4,area5,area6,area7,area8,area9,area10);
	fclose(triangleArea);
	printf("���������ǰӦ��Ŀ¼�µ�triangleArea.t�ļ��У���鿴���");
}
