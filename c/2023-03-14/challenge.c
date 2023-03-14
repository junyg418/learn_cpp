// challenge 1
/*
#include <stdio.h>

int main(void){
    int num = 0;
    scanf("%d", &num);

    printf("%x", num);
    return 0;
}
*/
// -------------
// challenge 2
/*
#include <stdio.h>

int main(void)
{
    int num1, num2;
    int x;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        x = num1;
        num1 = num2;
        num2 = x;
    }
    else if (num1 == num2)
    {
        printf("값을 구할 수 없습니다.");
        return 0;
    }
    
    
    for (int first = num1; first <= num2; first++)
        {
            for (int second = 1; second < 10; second++)
            {
                printf("%dx%d=%d\n",first, second, first*second);
            }
            printf("\n\n");
        }
    return 0;
}
*/
// -------------
// challenge 3