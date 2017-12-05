#include <stdio.h>
int main()
{
	float gpa;
	int i;
	printf("请输入你的成绩\n");
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
			printf("warning 低于2分\n");
		}
   }else{
   	printf("还不错哦！\n");
   }
   
}
