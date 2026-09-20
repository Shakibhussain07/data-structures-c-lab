#include <stdio.h>

int main()
{
    int arr[5] = {30, 20, 15, 73, 56};
    int n = 5, val, i, flag = 0;

    printf("Enter value to search: ");
    scanf("%d", &val);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == val)
        {
            printf("Element found at position %d", i + 1);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Element not found");

    return 0;
}