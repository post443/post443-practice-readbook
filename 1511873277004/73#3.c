#include <stdio.h>
int main()
{
	float n1,n2,n3,n4,n5;
	FILE *inptr;
	inptr = fopen("MYGRADE.REP","w");
	printf("请输入你上学期所有的成绩，用空格隔开：\n");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	n5 = (n1+n2+n3+n4)/4;
	fprintf(inptr,"XXX上学期的成绩分别为：%.2f %.2f %.2f %.2f\n平均成绩为：%.2f",n1,n2,n3,n4,n5);
	fclose(inptr);
	printf("XXX上学期的成绩分别为：%.2f %.2f %.2f %.2f\n平均成绩为：%.2f",n1,n2,n3,n4,n5);
}
