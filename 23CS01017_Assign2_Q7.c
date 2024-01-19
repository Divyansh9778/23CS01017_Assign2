#include <stdio.h>
int main()
{
    int tax_per = 8;
    float mcost, tip_per;
    printf("Enter the Meal Price: ");
    scanf("%f", &mcost);
    printf("Enter the Tip given: ");
    scanf("%f", &tip_per);
    int t_amt = mcost + (tip_per * mcost) / 100 + (tax_per * mcost) / 100;
    printf("Total cost of Meal: %d", t_amt);
    return 0;
}