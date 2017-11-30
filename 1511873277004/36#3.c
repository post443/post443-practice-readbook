#include <stdio.h>
int main ()
{
	float a,b,c,d;
	printf("请输入三个绩点，使用空格隔开\n");
	scanf("%f %f %f",&a,&b,&c);
	d = (a+b+c)/3;
	printf("你输入的几点平均值为:%f",d);
}
