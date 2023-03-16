#include <stdio.h>

int main(void)
{
    int num1 = 100, num2 = 100;
    int * pnum;

    pnum = &num1;
    
    *pnum += 30;
    printf("%d", num1);

    pnum = &num2;
    *pnum -= 30;
    printf("1 : %d, 2: %d", num1, pnum);

    return 0;
}