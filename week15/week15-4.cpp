#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		ans=ans+i*i;
	}
	printf("%d",ans);
}
