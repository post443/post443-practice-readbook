#include <stdio.h>
int main()
{
	float n1,n2,n3,n4,n5;
	FILE *inptr;
	inptr = fopen("MYGRADE.REP","w");
	printf("����������ѧ�����еĳɼ����ÿո������\n");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	n5 = (n1+n2+n3+n4)/4;
	fprintf(inptr,"XXX��ѧ�ڵĳɼ��ֱ�Ϊ��%.2f %.2f %.2f %.2f\nƽ���ɼ�Ϊ��%.2f",n1,n2,n3,n4,n5);
	fclose(inptr);
	printf("XXX��ѧ�ڵĳɼ��ֱ�Ϊ��%.2f %.2f %.2f %.2f\nƽ���ɼ�Ϊ��%.2f",n1,n2,n3,n4,n5);
}
