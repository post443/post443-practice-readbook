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
			printf("����Ϊ��%6d��С��1000������Ҫ��˰",salary);
		}else if(salary>=2000)
		{
			printf("����Ϊ��%6d������2000��˰��Ϊ:%.2f",salary,(float)salary *0.3*((float)salary-2000.)+500.);
		}else
		{
			printf("����Ϊ��%6d������1000С��2000��˰��Ϊ:%.2f",salary,(float)salary * 0.25);
		}
		
		if(i!=9)
		{
			printf("\n");
		}
	}
	fclose(inptr);
}
