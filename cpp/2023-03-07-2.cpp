// 코드가 좀 이상함
# include <iostream>

int main(int argc, char const *argv[])
{
    int val1, val2;     
    std::cout << "시작할 숫자와 끝 숫자를 숫자를 입력하세요!\n";
    std::cin >> val1 >> val2;
    int result;
    if(val1<val2){
        for (int z = val1+1; z > val2; z++)
        {
            /* code */
            result +=z;
        }
    }
    else if (val2>val1)
    {
        for(int i = val2+1; i>val1; i++){
            result+= i;
        }
    }
    else{
        std::cout << "값이 없습니다!"<<std::endl;
    }
    std::cout << result;
    
    
    return 0;
}
