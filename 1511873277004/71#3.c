#include <stdio.h>
int main()
{
	float n1,n2,n3,n4,n5;
	FILE *inptr;
	inptr = fopen("GRADE.REP","r");
	fscanf(inptr,"%f %f %f %f",&n1,&n2,&n3,&n4);
	fclose(inptr);
	n5 = (n1 +n2 +n3 +n4)/4;
	printf("4�ųɼ��ֱ�Ϊ��%.2f,%.2f,%.2f,%.2f\nƽ���ɼ�Ϊ��%.2f",n1,n2,n3,n4,n5);
}
