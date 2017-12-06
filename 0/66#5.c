#include <stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	printf("请输入 5 个 0 - 255 之间的整数，使用空格把它们分开\n");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	printf("数字 字符\n");
	printf(" %d   ",num1);
	putchar(num1);
	printf(" \n %d   ",num2);
	putchar(num2);
	printf(" \n %d   ",num3);
	putchar(num3);
	printf(" \n %d   ",num4);
	putchar(num4);
	printf(" \n %d   ",num5);
	putchar(num5);
}
