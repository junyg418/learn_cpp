#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    num3 = 333;
    num1 = printf("뽧\n");
    num3 = printf("%da\n", num3);

    printf("%d", num1);
    /* 
    printf 의 return value
    %s -> 인자로 받은 문자열 그대로
    %d -> 문자열의 개수로 반환 
        - formatting 상관없이 결과적인 문자열에 따라 숫자 반환함
        - 이스케이프 문자는 한개로 취급
        - 한글은 운영체제에 따라 다르다(내 컴퓨터는 한글자당 3글자 취급?..)
    */
    return 0;
}