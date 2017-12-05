#include <stdio.h>
int main()
{
	FILE *inptr;
	int salary,i;
	char a;
	inptr = fopen("salary.txt","r");
	for(i=0;i<10;i++)
	{
		printf("\n");
		fscanf(inptr,"$%d\n",&salary);
		if(salary<1000)
		{
			printf("工资为：%6d，小于1000，不需要上税",salary);
		}else if(salary>=2000)
		{
			printf("工资为：%6d，大于2000，税金为:%.2f",salary,(float)salary *0.3*((float)salary-2000.)+500.);
		}else
		{
			printf("工资为：%6d，大于1000小于2000，税金为:%.2f",salary,(float)salary * 0.25);
		}
		
		if(i!=9)
		{
			printf("\n");
		}
	}
	fclose(inptr);
}
