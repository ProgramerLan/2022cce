#include <stdio.h>
int sum (int a, int b );///先宣告declare

int main()
///在用之前，要先宣告declare，或定義define
{
    int ans = sum(2,3);///使用 呼叫
    printf("ans: %d\n",ans);

}
int sum (int a, int b )///定義define
{
    return a+b;
}///回傳，回復人家
