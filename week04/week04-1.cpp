#include <stdio.h>
int main()
{
    int y;
    printf("�п�J�Ʀr");
    scanf("%d",&y);
    if (y%400==0) printf("�|�~");
    else if (y%100==0) printf("���~/���q�~");
    else if (y%4==0) printf("�|�~");
    else printf("���~/���q�~");
}
