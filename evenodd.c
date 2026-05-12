#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i <= 9; i++)
    {
        //     printf("%d", arr[i]);
        // }
        // for (int i = 0; i <= 9; i++)
        // {
        if (i % 2 != 0)
        {
            printf("%d Even num\n", arr[i]*2);
        }
        else
        {
            printf("%d odd num\n", arr[i]+10);
        }
    }
    return 0;
}