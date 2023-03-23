// q13-1-1
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {1,2,3,4,5};

//     int *ptr = arr;

//     for (int i = 0; i < 5; i++)
//     {
//         *(ptr++) +=2;
//     }

//     for (int i=0; i<5; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// q13-1-2
/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        *(ptr+1) +=2;
    }

    for (int i=0; i<5; i++)
        printf("%d ", arr[i]);
    return 0;
}
*/

// q13-1-3
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int result = 0;
//     int * ptr = &arr[4];

//     for (int _ = 0; _ < 5; _++)
//         *(ptr--) += 2;
    
//     for (int i = 0; i < 5; i++)
//     {
//         result += arr[i];
//     }
//     printf("%d",result);
//     return 0;
// }

// 전부 정답
