#include <stdio.h>
int sum (int a, int b );///���ŧideclare

int main()
///�b�Τ��e�A�n���ŧideclare�A�Ωw�qdefine
{
    int ans = sum(2,3);///�ϥ� �I�s
    printf("ans: %d\n",ans);

}
int sum (int a, int b )///�w�qdefine
{
    return a+b;
}///�^�ǡA�^�_�H�a
