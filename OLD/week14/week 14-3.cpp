#include <stdio.h>
int a=20;
void funA()
{
int a=10;
printf("funA()�̦L�Xa:%d\n",a);
}
void funB()
{
int a=30;
printf("funA()�̦L�Xa:%d\n",a);
}
int main()
{
printf("�bmain�̬ݨ쪺a�O:%d\n",a);
funA();
funB();
printf("�bmain�̬ݨ쪺a�O:%d\n",a);
}
