#include <stdio.h>
#include <string.h>
int main()
{
	char line[200];

	scanf("%s", &line);

	int N= strlen(line);


	int ans=0;
	for(int i=0;i<N;i++){

		if(line[i]>='0' && line[i]<='9') ans++;
	}
	//printf("%s\n",line);
	printf("%d\n",ans);

}
