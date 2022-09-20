#include <stdio.h>
int main()
{
    printf("請輸入數字:");
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d + %d 是 %d",a,b,a+b);
    printf("%d - %d 是 %d",a,b,a-b);
    printf("%d * %d 是 %d",a,b,a*b);
    printf("%d / %d 是 %d",a,b,a/b);
    printf("%d 除法 %d 的餘數是 %d",a,b,a%b);

}
