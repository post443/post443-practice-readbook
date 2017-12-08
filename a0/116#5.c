#include <stdio.h>
int main()
{
	int i,isum1=0,isum2=0,N=9999;
	float f,x,sum1=0.0,sum2=0.0;
	
	x=1.0/N;
	printf("x=%f\n",x);
	
	for(i=1;i<=N;i++) {sum1 =+x; isum1+=1;}
	printf("sum1=%f,isum1=%d\n",sum1,isum1);
	
	for(f=x;f<=1.0;f+=x) {sum2+=x; isum2+=1;}
	printf("sum2=%f,isum2=%d\n",sum2,isum2);
}
