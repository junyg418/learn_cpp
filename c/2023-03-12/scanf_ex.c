#include <stdio.h>

int main(void){
    int input_data1, input_data2;

    scanf("%d", &input_data1);
    // scanf("111%d", &input_data1);  이건 안됨 왜일까?..
    printf("%d",input_data1);
    
    return 0;    
}