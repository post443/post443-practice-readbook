#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	double x,y,m1,m2,b1,b2;
	FILE *inpt;
	
	inpt = fopen("117INTSECT.DAT","r");
	
	fscanf(inpt,"%lf %lf",&m1,&b1);
	fscanf(inpt,"%lf %lf",&m2,&b2);
	
	if(m1 ==m2)
	{
		printf("两条梁平行，没有交点,请输入一个新的斜率（1-180）\n");
		scanf("%lf",&m1);
	}
	x = (b2 -b1)/(m1-m2);
	y = m1 * x+b1;
	
	printf("\nThe slops amd intercepts are:\n\n"
		"m1  =  %lf \n"
		"b1  =  %lf \n"
		"m2  =  %lf \n"
		"b2  =  %lf \n",m1,b1,m2,b2);
	printf("\n交叉点为(%lf,%lf)",x,y);
	fclose (inpt);
}
