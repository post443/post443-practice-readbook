#include <stdio.h>
#include <math.h>
void main(void)
{
	double leg11,leg21,leg12,leg22,leg13,leg23,leg14,leg24,leg15,leg25,leg31,leg32,leg33,leg34,leg35;

	printf("输入5个直角三角形的直角边的长度\n");
	printf("请输入第一个三角形的两个直角边 leg1  leg2\n");
	scanf("%lf %lf",&leg11,&leg21);
	printf("请输入第二个三角形的两个直角边 leg1  leg2\n");
	scanf("%lf %lf",&leg12,&leg22);
	printf("请输入第三个三角形的两个直角边 leg1  leg2\n");
	scanf("%lf %lf",&leg13,&leg23);
	printf("请输入第四个三角形的两个直角边 leg1  leg2\n");
	scanf("%lf %lf",&leg14,&leg24);
	printf("请输入第五个三角形的两个直角边 leg1  leg2\n");
	scanf("%lf %lf",&leg15,&leg25);
	
	leg31 = sqrt(pow(leg11,2)+pow(leg21,2));
	leg32 = sqrt(pow(leg12,2)+pow(leg22,2));
	leg33 = sqrt(pow(leg13,2)+pow(leg23,2));
	leg34 = sqrt(pow(leg14,2)+pow(leg24,2));
	leg35 = sqrt(pow(leg15,2)+pow(leg25,2));
	
	printf("         五个三角形的斜边长度          \n");
	printf(" 三角形序号       leg1 长度       leg2 长度       leg3 长度  \n");
	printf("      1           %8.2lf         %8.2lf        %8.2lf         \n",leg11,leg21,leg31);
	printf("      2           %8.2lf         %8.2lf        %8.2lf         \n",leg12,leg22,leg32);
	printf("      3           %8.2lf         %8.2lf        %8.2lf         \n",leg13,leg23,leg33);
	printf("      4           %8.2lf         %8.2lf        %8.2lf         \n",leg14,leg24,leg34);
	printf("      5           %8.2lf         %8.2lf        %8.2lf         \n",leg15,leg25,leg35);
}
