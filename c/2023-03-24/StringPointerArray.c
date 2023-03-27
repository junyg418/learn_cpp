// 문자열 포인터 배열
// 상수 형태 문자열들의 나열
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char * array[] = {"Hallym", "Universiy", "Array"};

    printf("%p \n", array[0]);
    printf("%p \n", array[1]);
    printf("%p \n", array[2]);
    return 0;
}
