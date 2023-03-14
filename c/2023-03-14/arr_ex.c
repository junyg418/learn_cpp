#include <stdio.h>

int main(void){
    // 아래와 같이 3가지의 배열 초기화 방법이 있다.
    int arr1[5] = {1,2,3,4,5}; // 알맞게 딱딱 들어감
    int arr2[] = {1,2,3,4,5,6,7}; // 자동으로 알맞게 길이가 7인 배열로 초기화
    int arr3[10] = {1,2,3}; // 나머지 배열에는 0으로 초기화 
    int arr1_len, arr2_len, arr3_len;

    arr1_len = sizeof(arr1)/sizeof(int);  // 이와같이 배열의 길이를 알 수 있음
    arr2_len = sizeof(arr2)/sizeof(int);
    arr3_len = sizeof(arr3)/sizeof(int);

    printf("arr1_의 길이 : %d\n", arr1_len);

    for (int i = 0; i < arr1_len; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < arr2_len; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (int i = 0; i < arr3_len; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}