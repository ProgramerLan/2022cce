#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char line[200];
	scanf("%s",line);
	int N= strlen(line);
	for(i=0;i<N;i++){
		printf("%c", line[i]);
		if((N-1-i)%3==0 && (N-1-i)!=0) printf(",");
		}
}
