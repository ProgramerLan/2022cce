#include <stdio.h>
int main()
{
    for( int n=1;n<1000; n++){
    if (n%8==6 && n%9==7 && n%15==13){


        printf("\n現在的n是 %d\n",n);
        printf("%d 除法 8 的餘數是 %d\n",n,n%8);
        printf("%d 除法 9 的餘數是 %d\n",n,n%9);
        printf("%d 除法 15 的餘數是 %d\n",n,n%15);}

}
}

