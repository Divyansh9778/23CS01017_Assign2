#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Year: ");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("THE YEAR IS LEAP YEAR!!");
    }
    else
        printf("THE YEAR IS NOT LEAP YEAR");
    return 0;
}