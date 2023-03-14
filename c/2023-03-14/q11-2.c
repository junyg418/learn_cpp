// q11-2-1 2023-03-14 오후 9시 30분
/*
#include <stdio.h>

int main(void)
{
    char input_data[100];
    int idx;

    scanf("%s", input_data);

    while (input_data[idx] != '\0')
    {
        idx++;
    }

    printf("%d", idx);
    return 0;
}
*/

// q11-2-2 2023-03-13 오후 9시 38분
/*
#include <stdio.h>

int main(void)
{
    char input_data[100];
    char temp;
    int idx=0;

    scanf("%s", input_data);
    
    while (input_data[idx] != '\0')
    {
        idx++;
    }
    for (int i = 0; i < idx/2; i++)
    {
        temp = input_data[i];
        input_data[i] = input_data[idx-1-i];
        input_data[idx-1-i] = temp;
    }
    
    printf("%s", input_data);
    return 0;
}
*/
// q-11-2-3 2023-03-14 오후 10시 10분
/*
#include <stdio.h>

int main(void){
    char input_data[100];
    int max;
    char result;
    int idx= 0;

    scanf("%s", input_data);

    while (input_data[idx] != '\0')
    {
        if (max < (int)input_data[idx])
        {
            max = input_data[idx];
        }
        
        idx++;
    }
    result = max;
    printf("%c", result);

    return 0;
}
*/