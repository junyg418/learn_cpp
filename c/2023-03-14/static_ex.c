// static 은 self와 비슷한 느낌일지도
#include <stdio.h>

void simple_func(void)
{
    static int num1 = 0;
    int num2 = 0;

    num1++, num2++;
    printf("static = %d, local = %d\n", num1, num2);
}
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        simple_func();
    }
    return 0;
}