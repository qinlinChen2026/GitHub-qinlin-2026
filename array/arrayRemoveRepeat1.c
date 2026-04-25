#include <stdio.h>
int main()
{
    int arr[6] = {5, 4, 3, 5, 3};
    int newArr[6];
    int i, j, count = 0;
    int isSame;
    for (i = 0; i < 6; i++)
    {
        isSame = 0;
        for (j = 0; j < count; j++)
        {
            if (arr[i] == newArr[j])
            {
                isSame = 1;
                break;
            }
        }
        if (isSame == 0)
        {
            newArr[count] = arr[i];
            count++;
        }
    }
    printf("去重复之后：\n") ;
    for (i = 0; i < count; i++)
    {
        printf("%d", newArr[i]);
    }
    return 0;
}