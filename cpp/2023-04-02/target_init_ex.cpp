#include <iostream>

using namespace std;

class Exam
{
    int radian;
public:
    Exam();
    Exam(int r);
};
// old
    Exam::Exam()
    {
        radian = 1;
        cout << "반지름은 "<< radian;
    }
    Exam::Exam(int r){
        radian = r;
        cout << "반지름은 "<< radian;
    }
// new 타겟 생성자, 위임 생성자

    Exam::Exam() : Exam(1){}   // 위임 생성자
    
    Exam::Exam(int r){         // target 생성자
        radian = r;
        cout << "반지름은 "<< radian;
    }


int main(int argc, char const *argv[])
{
    
    return 0;
}
