#include <stdio.h>
int main()
{
    int y;
    printf("請輸入數字");
    scanf("%d",&y);
    if (y%400==0) printf("閏年");
    else if (y%100==0) printf("平年/普通年");
    else if (y%4==0) printf("閏年");
    else printf("平年/普通年");
}
