#include <stdio.h>

void display_num (int a)
{
    printf("你丟給display_num的參數引數是: %d\n");
    return;
}

int main()
{

    display_num(100);
    display_num(200);
}
