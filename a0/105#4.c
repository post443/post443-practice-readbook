#include <stdio.h>
int main ()
{
	int input,i;
	printf("������һ������\n");
	scanf("%d",&input);
	if (input == 2 || input == 3)
	{
		printf("������");
	}else if (input < 2)
	{
		printf("��������ڵ���2������");
	}else if(input%2 == 0)
	{
		printf("��������");
	}else
	{
		i = 3;
		while(input/2>=i)
		{
			if(input%i==0)
			{
				printf("��������");
				return ;
			}
			i+=2;
		}
		printf("������");
	}
}
