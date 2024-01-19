#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int x = (a <= 200 && a >= 100) ? (a % 2 != 0 ? 1 : 0) : 0;
    if (x == 1)
    {
        printf("True");
    }
    else
        printf("False");
    return 0;
}