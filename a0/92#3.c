#include <stdio.h>
int main()
{
	int y,S,D;
	printf("  year    需求    供应    缺口  \n");
	for (y=1990;y<=2010;y++)
	{
		S = 1000 + 50 * (y-1990);
		if (y>1995)
		{
			D = 1200 + 60 * (y - 1995);
		}else
		{
			D  = 1200;
		}
		printf("  %4d    %4d    %4d    %4d  \n",y,D,S,D-S);
	}

	

}
