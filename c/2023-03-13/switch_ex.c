#include <stdio.h>

int main(void){
    int num = 1;
    /*
    switch (num)
    {
    case 1:
        printf("a");
    case -1:
        printf("a");
        break;
    default:
        break;
    }
    를 간결하게
    */

    switch (num)
    {
    case 1: case -1:
        printf("a");

    default:
        break;
    }
    // 와 같이 표현할 수 있다. 
    // 이것의 switch의 장점이다. 1, -1 제외 하고 A, a 와 같은 분야에서도 응용 할 수 있다.

    return 0;
}