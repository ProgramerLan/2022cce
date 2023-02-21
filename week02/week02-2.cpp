#include <stdio.h>
int main()
{
    long long int a,b;
    long long int ans=0;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        ans=a-b
        if(ans<0) ans = b-a
        printf("%lld\n",ans)
    }
}
