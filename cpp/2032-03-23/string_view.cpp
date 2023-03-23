
// #pragma warning(disable : 4996)  // 이건 뭐지?
#include <iostream>
#include <string>
#include <cstring> // 이건 뭐지
#include <string_view>

using namespace std;

// 여러 문자열을 처리하기 위하여 각각의 문자열 별로
// 함수 오버로딩을 했어야 했다
string extractExt(const string filename)
{
    cout << "1)";
    return filename.substr(filename.find('.'));
}
char *extractExt(const char *filename)
{
    cout << "2)";
    char *p = nullptr;
    p = strchr(filename, '.');
    return p;
}

// 해결책 string_view
/*
  char* 과 string 은 서로 다른 문자열 형태를 가지고있다.
  char 문자열은 null-terminated-string
  string 문자열은 c++ 에서 추가된 클라스 형태의 타입으로
  내부적으로 여러 함수들을 지원하고 alogridm 모듈을 불러오면 더 다양한 기능들을 사용할 수 있다
  하지만 이 char 과 stirng 의 문자열은 서로 다른 형태를 하고있기에
  여러 불편함을 겪지만
  이 문제를 string_view 클라스가 해결해준다
  어떤 문자열이든 string_view가 문자열로 취급해서?... 한다고하네요?..

  ++
  string_view
  다양한 type의 문자열 처리
  임시 객체 사용없이 문자열 사용
  상수처리 되어 문자열 원형 변경 X
  c++17에서만 사용됨
*/
string_view extractExt(string_view filename)
{
    return filename.substr(filename.find('.'));
}