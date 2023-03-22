#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>input_data)
{
    cout << "vector = ";
    for (int value : input_data)
    {
        cout << value << ", ";
    }
    cout << endl;
}


int main(int argc, char const *argv[])
{
// ----------------------------------------
// 벡터 정의
    vector<int> vec_1 {1, 2, 3, 4, 5}; // std::vector<type> name
    cout << endl;
    cout << "Vector 기본"<<endl;

    print_vector(vec_1);
// ----------------------------------------
// push_back 함수를 사용하여 뒷부분에 인자 추가
    cout << endl;
    cout << "데이터 추가"<<endl;
    for (int i {0}; i < 6; i++)
        vec_1.push_back(i*2); // vector 인자 뒤에다가 인자값을 추가
    
    print_vector(vec_1);
// ----------------------------------------
// emplace_back 함수를 사용 후 size출력
    cout << endl;
    cout << "데이터 추가 후 size 출력"<<endl;

    vec_1.emplace_back(4); // vector 읹다 뒤아다 인자값 추가

    cout << "Vector_len = " << vec_1.size() << endl;

    print_vector(vec_1);
// ----------------------------------------
// pop_back 을 사용하여 인자 하나 삭제
    cout << endl;
    vec_1.pop_back();
    cout << "Vector_len = " << vec_1.size() << endl;

    
    return 0;
}