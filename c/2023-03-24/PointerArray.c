// 새벽 3시 30분
// 포인터 배열에 관한 코드
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1 = 10, num2 = 20, num3 =30;

    int * arr[3] = {&num1, &num2, &num3};

    printf("%d \n", *arr[0]);
    printf("%d \n", *arr[1]);
    printf("%d \n", *arr[2]);
    return 0;
}
