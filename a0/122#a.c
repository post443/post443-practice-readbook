#include <stdio.h>
int main()
{
	int input;
	char cORf;
	double converteDeg;

	
	while( input>=0 )
	{
		printf("����һ���¶ȣ�ʹ��c �� f��β��c Ϊ���϶ȣ�fΪ���϶ȣ���������һ����������\n");
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
