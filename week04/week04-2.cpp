#include <stdio.h>
#include <string.h>
int main()
{
	char line[50];
	scanf("%s",line);

	int N = strlen(line);
	int yes = 0;
	for(int i=0; i<N; i++){
        if(line[i]==line[N-1-i]) yes++;
    }
    if(yes==N) printf("全部yes收齊，是迴文");
    else printf("不是全部yes，不是迴文");
}
