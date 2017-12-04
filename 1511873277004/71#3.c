#include <stdio.h>
int main()
{
	float n1,n2,n3,n4,n5;
	FILE *inptr;
	inptr = fopen("GRADE.REP","r");
	fscanf(inptr,"%f %f %f %f",&n1,&n2,&n3,&n4);
	fclose(inptr);
	n5 = (n1 +n2 +n3 +n4)/4;
	printf("4门成绩分别为：%.2f,%.2f,%.2f,%.2f\n平均成绩为：%.2f",n1,n2,n3,n4,n5);
}
