#include <stdio.h>

int AddToTotal(int num)
{
    static int total = 0;

    total+=num;
    return total;
}

// 아래 코드를 위로 변경
// int total = 0;
// int AddToTotal(int num)
// {

//     total+=num;
//     return total;
// }

int main(void){
    int num;
    
    for (int i = 0; i < 3; i++)
    {
        printf("입력%d", i+1);
        scanf("d", &num);
        printf("누적: %d", AddToTotal(num));
    }
    
    return 0;
}