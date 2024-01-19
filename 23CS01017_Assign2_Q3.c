#include <stdio.h>
int main()
{
    int x;
    printf("Enter total number of Days: ");
    scanf("%d", &x);
    int y = x / 365;
    int z = x % 365;
    int a = z / 30;
    int b = z % 30;
    int c = b / 7;
    int d = b - c * 7;
    printf("Years = %d\nMonths = %d\nWeeks = %d\nDays = %d", y, a, c, d);
    return 0;
}