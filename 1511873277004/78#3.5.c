#include <stdio.h>
#include <math.h>
#define PI 3.1415926
#define g 9.81
int main()
{
	double l1,l2,c3,c4,l5;

	printf("For case 1, enter 长度\n");
	scanf("%lf",&l1);

	printf("For case 2, enter 长度\n");
	scanf("%lf",&l2);

	printf("For case 3, enter 周期\n");
	scanf("%lf",&c3);

	printf("For case 4, enter 周期\n");
	scanf("%lf",&c4);

	printf("For case 5, enter 长度\n");
	scanf("%lf",&l5);
	
	printf("\n    长度m    周期s    \n\
 %7.2lf  %7.2lf\n\
 %7.2lf  %7.2lf\n\
 %7.2lf  %7.2lf\n\
 %7.2lf  %7.2lf\n\
 %7.2lf  %7.2lf\n",l1,2*PI*sqrt(l1/g),l2,2*PI*sqrt(l2/g),sqrt(c3/(2*PI)/sqrt(g)),c3,sqrt(c4/(2*PI)/sqrt(g)),c4,2*PI*sqrt(l5/g),l5);
}
