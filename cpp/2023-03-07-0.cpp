// 문자열 출력 및 입력 예제 작성및 분석
// 2023-03-07
#include <iostream>

using namespace std;

int main()
{
    int red;
    int hight;
    cout << "학생의 나이와 키를 입력하세요. >>";

    cin >> red >> hight;
    cout << red << "살입니다." << endl;
    cout << "키는"<< hight<< "cm입니다.";
    /**
     *  cin << 두개가 있다면 어떠한 문자열이 나올 때 까지 반복해서 받아온다
     *  공백은 무시한 채로 \n 도 조차 무시한다 오직 문자열이 나올 때 까지 데이터를 반복해서 받는다.
    **/
}
