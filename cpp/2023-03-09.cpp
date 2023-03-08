// 조작자 사용 예제
#include <iostream>
#include <iomanip> // 인수가 있는 조작자를 사용할 떄는 import 해야함, but 인수가 없는건 상관 x
/*
조작자에 대하여

사용법 :          std::조작자 의 형식을 사용

endl                스트림 버퍼(문자열 출력 버퍼?...)를 모두 출력하고 다음 줄(\n)로 넘어감
oct                정수 필드를 8진수 기반으로 출력
dec                정수 필드를 10진수 기반으로 출력 
hex               정수 필드를 16진수 기반으로 출력
fixed             실수 필드를 고정 소수점 방식으로 출력
boolalpha         bool 값이 출력될 때 "true" or "false" 형식으로 출력되게 함 원래는 0, 1로 출력됨

이 두 조작자는 iomanip 를 필수로 불러와야함
setprecision(int np)    출력되는 수의 유효 숫자 자리수를 np 개로 설정. 소수점(.)은 별도로 카운트
setw(int minWidth)      필드의 최소 넓이를 minWidth로 지정
*/

int main(){
    bool true_data = true;

    std::cout << "일반적인 bool 데이터 출력: " << true_data << std::endl;
    std::cout << "조작자를 사용한 bool 데이터: " << std::boolalpha << true_data << std::endl;

    std::cout << std::setprecision(2) << 12345.1311251 << std::endl; // 전체를 기준으로 ?.... 이때 정수부분의 자릿수가 인수보다 크다면 결과값이 예상과 다름 질문하자
    std::cout << std::fixed<< std::setprecision(4) << 12.1311251 << std::endl; // 소숫점을 기준으로

    std::cout << "15를 8진수로 변환 숫자:" << std::oct << 15 << std::endl;
    std::cout << "15를 8진수로 바꾸고 다른 숫자에도 영향이 갈까? " << std::oct << 15 << "다음 숫자 " << 9 << std::endl; // 결과는 영향이 간다
    std::cout << "첫 숫자 " << std::oct << 15 << " 두번째 숫자 " << std::dec << 9 << std::endl;
}