#include <stdio.h>
#include <math.h>
int main()
{
	double F = 800,m = 1000,l1,s1,s2,p2,l3,p3;

	printf("For case 1, enter 推动的距离 和 最后的速度\n");
	scanf("%lf %lf",&l1,&s1);

	printf("For case 2, enter 最后的速度 和 推车的人数\n");
	scanf("%lf %lf",&s2,&p2);

	printf("For case 3, enter 推动的距离 和 推车的人数\n");
	scanf("%lf %lf",&l3,&p3);
	
	printf("\n    推动的距离    最后的速度    推车的人数\n\
 %9.2lf  %9.2lf    %9.0lf\n\
 %9.2lf  %9.2lf    %9.0lf\n\
 %9.2lf  %9.2lf    %9.0lf\n",l1,s1,0.5*m*s1*s1/l1/F,0.5*m*s1*s1/(F*p2),s2,p2,l3,sqrt(F*p3*l3/(0.5*m)),p3);
}
