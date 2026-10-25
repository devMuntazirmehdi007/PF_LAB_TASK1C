#include <stdio.h>

float calculateBase(float weight)
{
    if(weight <= 2)
        return 200;
    else if(weight <= 5)
        return 400;
    else
        return 700;
}

float calculateDistance(float distance)
{
    if(distance > 10)
        return (distance - 10) * 20;

    return 0;
}

int main()
{
    float weight, distance, base, distanceCharge;
    float total, discount = 0, finalAmount;
    int member;

    printf("Enter parcel weight in kg: ");
    scanf("%f", &weight);

    printf("Enter distance in km: ");
    scanf("%f", &distance);

    printf("Member? (1 = Yes, 0 = No): ");
    scanf("%d", &member);

    if(weight <= 0 || distance < 0 ||
       (member != 0 && member != 1))
    {
        printf("Invalid input.\n");
        return 0;
    }

    base = calculateBase(weight);
    distanceCharge = calculateDistance(distance);
    total = base + distanceCharge;

    if(member == 1 && total > 1000)
        discount = total * 0.10;

    finalAmount = total - discount;

    printf("Base Charges: Rs. %.2f\n", base);
    printf("Distance Charges: Rs. %.2f\n", distanceCharge);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Amount: Rs. %.2f\n", finalAmount);

    return 0;
}