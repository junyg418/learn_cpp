#include <stdio.h>

int main(void){
    int aa = 10;
    int *pnum;

    pnum = &aa; // pnum 에는 aa 의 메모리 주소값이 있음
    *pnum = 30; // *pnum 은 aa 의 메모리 주소에 있는 값을 참조함

    printf("%x", &aa); // & 연산자 : 피연산자의 주소값을 반환하는 연산자
//                       * 연산자 : 포인터 변수의 주소값의 value 를 반환하는 연산자


    return 0;
}