#include <stdio.h>
#include <math.h>
int main()
{
	double x,y,delta = 0.1,distance,min = -1,bx,by;
	for (x = .1;x<10;x+=delta)
	{
		y = sqrt(54/x);
		distance = x*x +y*y;
		if((min == -1)||(min>distance))
		{
		    min = distance;
		    bx = x;
			by = y;
		}
	}
	printf("radius of the disc: %.1f\n",sqrt(min));
	printf("×ø±êÎª£º£¨%.1f,%.1f£©and (%.1f,-%.1f) ",bx,by,bx,by);
}
