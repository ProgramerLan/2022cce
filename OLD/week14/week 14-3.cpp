#include <stdio.h>
int a=20;
void funA()
{
int a=10;
printf("funA()裡印出a:%d\n",a);
}
void funB()
{
int a=30;
printf("funA()裡印出a:%d\n",a);
}
int main()
{
printf("在main裡看到的a是:%d\n",a);
funA();
funB();
printf("在main裡看到的a是:%d\n",a);
}
