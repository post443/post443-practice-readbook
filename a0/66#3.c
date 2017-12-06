#include <stdio.h>
int main()
{
	char c1,c2,c3,c4,c5,c6,c7,c8,x1,x2,x3,x4,x5,x6,x7,x8,c9,x9;
	scanf("%c%c%c%*c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8),&c9;
	fflush(stdin);
	scanf("%c%c%c%c%*c%c%c%c%c",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9);
	printf("%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c",x5,c5,c4,x4,x3,x6,x1,c2,c3,x7,x1,c1,x2,c6,c8,c7,x8);
}
