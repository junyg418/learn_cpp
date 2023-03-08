// 코드가 좀 이상함 해결해씀
# include <iostream>

int main(int argc, char const *argv[])
{
    int val1, val2;     
    std::cout << "first and end input data!\n";
    std::cin >> val1 >> val2;

    if(val1 > val2){
        int a = val2;
        val2 = val1;
        val1 = a;
    }
    else if(val1 == val2){
        std::cout << "no data";
        return 0;
    }
    int result;
    if(val1<val2){
        for (int i = val1 +1; i < val2; i++)
        {
            /* code */
            result +=i;
        }
    }
    std::cout << result;
    
    
    return 0;
}
