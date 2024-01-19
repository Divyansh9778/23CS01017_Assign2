#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    int x = ((a > b) ? ((b > c) ? a : ((a > c) ? a : c)) : ((b > c) ? b : ((a > c) ? a : c)));
    printf("Max no is %d", x);
    return 0;
}
