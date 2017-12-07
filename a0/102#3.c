#include <stdio.h>
int main ()
{
	double income,tax;
	int A;
	printf("请输入税前薪水：\n");
	scanf("%lf",&income);
	A = income /1000;
	switch(A)
	{
		case 0:tax=income*0.2;
			break;
		case 1:tax = income * 0.3;
			break;
		default:tax = income * 0.4;
	}
	printf("需要缴纳的税金为：%.2lf",tax);
}
