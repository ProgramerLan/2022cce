#include <stdio.h>
int main()
{

    char line[3000];

    scanf("%s",line);
    printf("他有幾個字母呢");
    printf("%s\n",line);
    int count=0;
    printf("請輸入很長的字串，不要夾空格，結尾Enter\n");
    for(int i=0;line[i]!=0;i++){
        count++;
    }
    printf("count:%d\n",count);
}

