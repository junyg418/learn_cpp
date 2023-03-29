#include <iostream>

bool average(int *arr, int arr_size, int &avg)
{
    int sum = 0;
    if (arr_size <= 0)
        return false;
    for (int value = 0; value < arr_size; value++)
    {
        sum += arr[value];
    }
    avg = sum / arr_size;
    return true;
}
void print_avg(const int & avg) {
    std::cout << "평균값은 " << avg <<"입니다!" << std::endl;
}
void arr_error(void){
    std::cout << "메게변수 오류" << std::endl;
}
int main(void)
{
    int array[] = {741, 285, 345, 4135, 5};
    int avg;
    int array_len = sizeof(array) / sizeof(int);

    average(array, array_len, avg) ? print_avg(avg) : arr_error();
    return 0;
}