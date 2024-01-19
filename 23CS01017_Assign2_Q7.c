#include <stdio.h>
#include <math.h>
int main()
{
    float mcost, tip_per, tax_per;
    printf("Enter the Meal Price: ");
    scanf("%f", &mcost);
    printf("Enter the Tip given: ");
    scanf("%f", &tip_per);
    printf("Enter the Tax applied: ");
    scanf("%f", &tax_per);
    float t_amt = mcost + (tip_per * mcost) / 100 + (tax_per * mcost) / 100;
    printf("Total cost of Meal: %.0lf", round(t_amt));
    return 0;
}
