#include <stdio.h>
int main()
{

    int n;
    scanf("%d"),&n;

    while (n>0){

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    }
}
