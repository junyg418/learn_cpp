#include <iostream>
#include <array> // arrray 클라스
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 6> array_1 {3, 6, 11, 5, 7};

    array<int, 6> array_2;
    array_2 = {12, 4, 31, 46, 23, 9};

    cout << "array_1.size = " << array_1.size() << endl;

// ---------------------------------------------------------
    cout << "\narray_1.at(2) = " << array_1.at(2) << endl;
    cout << "array_1[2] = " << array_1[2] << endl;

    // 두 코드는 같지만 array.at() 과 대괄호의 차이점은
    // at 은 indexError 를 잡아주지만
    // 대괄호는 indexError를 무시한다
    // 그래서 c++ 에서는 at 의 사용을 권장
    // cout << "array_1.at(7) = " << array_1.at(7) << endl;   
    // cout << "array_1[7] = " << array_1[7] << endl;
// ---------------------------------------------------------
    cout << "\narray_1 첫번째 원소 = " << array_1.front() << "마지막 원소 = " << array_1.back() << endl;
    cout << "array_1 배열 상태 = " << boolalpha << array_1.empty() << endl;

    cout << "\narray_1 sort = ";
    sort(array_1.begin(), array_1.end());

    for (auto value : array_1)
        cout << value << " ";

// ---------------------------------------------------------
// 이 예제를 통해서 sort 의 인자는
// 배열의 시작 주소, 배열의 끝 주소를 나타낸다는것을 의미한다
    cout << "\n\narray_1.begin = " << array_1.begin() << endl;
    cout << "array_1.end = " << array_1.end() << endl; // 배열의 완전 끝 주소를 의미하는 듯
    cout << "array_1 이름 주소 = " << &array_1 << endl;
    cout << "array_1 끝 주소 = " << &array_1.back() << endl; // 끝주소가 array_1.end 보다 4 작은 이유는 int value byte 가 4 byte이기에

    return 0;
}
