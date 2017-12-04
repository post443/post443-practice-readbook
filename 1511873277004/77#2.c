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
	第一个三角形的面积：%6.2f \n\
	第二个三角形的面积：%6.2f \n\
	第三个三角形的面积：%6.2f \n\
	第四个三角形的面积：%6.2f \n\
	第五个三角形的面积：%6.2f \n\
	第六个三角形的面积：%6.2f \n\
	第七个三角形的面积：%6.2f \n\
	第八个三角形的面积：%6.2f \n\
	第九个三角形的面积：%6.2f \n\
	第十个三角形的面积：%6.2f \n\
		",area1,area2,area3,area4,area5,area6,area7,area8,area9,area10);
	fclose(triangleArea);
	printf("以输出到当前应用目录下的triangleArea.t文件中，请查看结果");
}
