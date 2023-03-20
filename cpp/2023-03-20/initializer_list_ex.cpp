#include <iostream>
#include <initializer_list>

using namespace std;

void list_exam(initializer_list<int> value)
{
    int hip = 0;
    for (auto data : value)
        hip += data;
    cout << "결과" << hip << endl;
    cout << "평균" << hip/value.size() << endl;
}

int main(int argc, char const *argv[])
{
    // list_exam({36,40});
    // list_exam({20,50,70,90});

    for (int data: {34, 56, 87, 41,26,83})
        cout << data << endl;
    return 0;
}
