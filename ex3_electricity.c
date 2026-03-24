/* Name: RUGABA BENEDICT*/
/* Student Number: 25/U/BIE/01417/PE*/

#include <stdio.h>

int main(void)
{
    float units_consumed;
    float cost_per_unit;
    float total_bill;

    printf("Enter units consumed: ");
    scanf("%f", &units_consumed);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_bill = (units_consumed * cost_per_unit);

    printf("Total electricity bill:%.2f", total_bill);

    return 0;
}
