#include <stdio.h>
int main()
{
	char a = 'A',b = 'B',c = 'C',d = 'D',e ='E',s = ' ';
	printf("%c%c%c%c%c\n",a,b,c,d,e);
	printf("%c%c%c%c%c\n",s,b,c,d,e);
	printf("%c%c%c%c%c\n",s,s,c,d,e);
	printf("%c%c%c%c%c\n",s,s,s,d,e);
	printf("%c%c%c%c%c\n",s,s,s,s,e);
}
