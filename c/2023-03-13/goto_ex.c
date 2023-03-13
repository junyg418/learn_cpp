#include <stdio.h>

int main(void)
{
    int num;
ONE:
    scanf("%d", &num);
    if (num == 1)
    {
        printf("1을 입력");
        goto ONE;
    }
    else if (num ==2)
    {
        goto TWO;
    }
    
TWO:
    printf("2를 입력");

    return 0;
}