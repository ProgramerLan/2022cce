#include <stdio.h>
int main()
{
	int ans=0,temp;

	while(scanf("%d",&temp)==1){
		if(temp==0) break;
		if(temp>0)ans=ans+temp;
	}
	printf("%d",ans);
}
