#include <stdio.h>


// 하단에 있는 9번째 까지의 줄을 보고 함수의 선언이라고 한다
int Add(int a, int b);
// int Add(int, int); 이것도 가능
void ShowAddResult(int num);
int input(void);
void show_message(void);

int main(void)
{
    int num1, num2, result;

    show_message();

    num1 = input();
    num2 = input();

    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}

// 하단에 있는 것들을 함수의 정의라 한다.
int Add(int a, int b)
{
    return a + b;
}

void ShowAddResult(int num)
{
    printf("%d",num);
}

int input(void)
{
    int num;
    scanf("%d", &num);
    return num;
}

void show_message(void)
{
    printf("두개의 정수를 입력하면 덧셈결과가 출력됩니다.\n");
    printf("두개의 정수를 입력하세요! : ");
    return;
}
