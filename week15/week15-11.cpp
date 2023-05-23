#include <stdio.h>
int main()
{
	int N,M,ans;
	scanf("%d%d",&N,&M);
	if(N%M==0) ans=N/M;
	else ans=N/M+1;
	printf("%d",ans);
}
