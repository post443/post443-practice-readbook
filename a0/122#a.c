#include <stdio.h>
int main()
{
	int input;
	char cORf;
	double converteDeg;

	
	while( input>=0 )
	{
		printf("输入一个温度（使用c 或 f结尾，c 为摄氏度，f为华氏度，必须输入一个正整数）\n");
	    scanf("%d%c",&input,&cORf);
		if(cORf == 'C' || cORf == 'c')
		{
			converteDeg = input *9/5.0 +32;
			printf("%7.2f F\n",converteDeg);
		}
		else if(cORf == 'F' || cORf == 'f')
		{
			converteDeg = (input -32)*5/9.0;
			printf("%7.2f C\n",converteDeg);
		}
	}
}
