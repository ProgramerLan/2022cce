#include <stdio.h>
int main()
{
	int a,b,max,min;
	scanf("%d",&a);
	max=a;
	min=a;
	while(scanf("%d",&b)==1){
		if(b==0) break;
		if(b>max)max=b;
		else if(b<min) min=b;
	}
	printf("[%d,%d]",min,max);
}
