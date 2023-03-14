#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("a:%d address: %d\n",a,&a);
    *p=20;
    printf("now is:%d\n",a);


}
