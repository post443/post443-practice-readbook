#include <stdio.h>
int main()
{
	double horizleg,vertleg,area;
	horizleg = 5.0;
	vertleg  = 7.0;
	area     = 0.5 * horizleg * vertleg;
	printf(" \n第一个三角形的面积：%6.2f \n",area);
	

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第二个三角形的面积：%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第三个三角形的面积：%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第四个三角形的面积：%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第五个三角形的面积：%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第六个三角形的面积：%6.2f \n",area);

	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第七个三角形的面积：%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第八个三角形的面积：%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area      = .5 * horizleg * vertleg;
	printf("第九个三角形的面积：%6.2f \n",area);
	
	horizleg += 1.;
	vertleg  /= 2.;
	area     = .5 * horizleg * vertleg;
	printf("第十个三角形的面积：%6.2f \n",area);
}
