#include <stdio.h>
int main()
{
	int S;
	if(S>=90) printf("A");
	else if(S>=80 && S<90) printf("B");
	else if(S>=70 && S<80) printf("C");
	else if(S>=60 && S<70) printf("D");
	else  printf("F");

}
