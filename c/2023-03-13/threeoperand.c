// 2023-03-13 공학관에서 열혈 c 프로그래밍 공부 (삼 항 연산자 = 조건 연산자)

#include <stdio.h>

int main(void){
    int num, abs;
    printf("정수 입력: ");
    scanf("%d", &num);

    abs = num>0 ? num : -num; // 이것이 조건연산자
    printf("%d", abs);
    return 0;    
}