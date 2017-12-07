#include <stdio.h>
int main ()
{
	int input,i;
	printf("请输入一个整数\n");
	scanf("%d",&input);
	if (input == 2 || input == 3)
	{
		printf("是素数");
	}else if (input < 2)
	{
		printf("请输入大于等于2的整数");
	}else if(input%2 == 0)
	{
		printf("不是素数");
	}else
	{
		i = 3;
		while(input/2>=i)
		{
			if(input%i==0)
			{
				printf("不是素数");
				return ;
			}
			i+=2;
		}
		printf("是素数");
	}
}
