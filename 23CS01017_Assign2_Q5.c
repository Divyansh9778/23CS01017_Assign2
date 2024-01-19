#include <stdio.h>
int main()
{
    int x;
    printf("Enter the no: ");
    scanf("%d", &x);
    int y = x & 1;
    if (y % 2 == 0)
    {
        printf("No is even");
    }
    else
        printf("No is odd");
    return 0;
}