#include <stdio.h>

int main(void){
    int num1 = 1;
    int num2 = 2;
    int result1, result2, result3;

    result1 = (num1==1||num2==2);
    result2 = (num1==3&&num2==2);
    result3 = (!num1); 

    printf("%d", result1);
    printf("%d", result2);
    printf("%d", result3);

    return 0;    
}