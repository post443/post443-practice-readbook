#include <stdio.h>
int main()
{
	float gpa;
	int i;
	printf("��������ĳɼ�\n");
	scanf("%f",&gpa);
	
	if(gpa<2)
	{
		for(i =0;i<=10;i++)
        {
            printf("\a");
            _sleep(1000);
		}
	}else if(gpa>3.9){
		for(i =0;i<=20;i++){
			printf("warning ����2��\n");
		}
   }else{
   	printf("������Ŷ��\n");
   }
   
}
