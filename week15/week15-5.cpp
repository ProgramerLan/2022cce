#include <stdio.h>
int main()
{

    char line[3000];

    scanf("%s",line);
    printf("�L���X�Ӧr���O");
    printf("%s\n",line);
    int count=0;
    printf("�п�J�ܪ����r��A���n���Ů�A����Enter\n");
    for(int i=0;line[i]!=0;i++){
        count++;
    }
    printf("count:%d\n",count);
}

