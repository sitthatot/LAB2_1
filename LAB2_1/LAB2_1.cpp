#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int number, i = 2;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("Factoring Result : ");
    while (number != 1)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
            number = number / i;
            if (number != 1)
            {
                printf("x ");
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}