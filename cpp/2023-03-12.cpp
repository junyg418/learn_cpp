/*
함수 오버로딩 학습

오버 로딩이란 c언어를 공부할 때 동일한 함수를 지원하는 것을 허용하지 않는다
하지만 오버로딩을 한다면 가능하다
어떻게???
인자로~~
*/ 


/*
#include <iostream>

using namespace std;

int  main(int argc, char const *argv[])
{

int my(int num){
    num++;
    return 0;
}

int my(int a, int b){
    return a+ b;
}


cout <<"a"<< my(30, 40) << endl;
}
*/
//위 코드는 잘못되었다 그 이유는 함수를 main함수 내부에 작성해서?..
// void 는 뭘까 궁금하네
// 이게 어떻게 가능하냐? "함수의 이름", "매개변수의 선언" 을 가지고 함수를 찾기 때문
