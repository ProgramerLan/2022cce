#include <stdio.h>
int main()
{
	int x1,x2,y1,y2,ans;
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	ans=(y1-x1)*(y2-x2);
	if (ans<0) ans=-ans;
	printf("%d",ans);
}
