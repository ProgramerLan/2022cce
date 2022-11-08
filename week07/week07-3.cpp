

#include<stdio.h>
int main ()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int c;
    while(1){
        c = a%b ;
        printf("a:%lld b:%lld c:%lld\n",a,b,c);
        if(c = 0) break;
    }
    printf("µª®×¬O:%lld",b);
}
