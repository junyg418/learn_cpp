#include <stdio.h>

int main(void){
    // int i;
    float num = 0.0;    

    for(int i = 0; i<100; i++)
        num+=1;

    printf("%f", num);
    return 0;    
}

// 실수에 관한 오류가 나지않는다
// 뭐지 왜 책에서는 오류가 났었는데 해결됬나보다?..