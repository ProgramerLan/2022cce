#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char line[30];

    printf("請輸入1個字串: ");
    scanf("%s",&line);
    printf("你輸入了%s \n",line);

    int N = strlen(line);
    for(int i=0;i<N;i++)
    {
        if(line[i]=='2')
        {
            printf("找到2\n");
        }
    }
}
