#include <stdio.h>
float Total_Amount(float p, float r, int n);
int main()
{
    /*Darshan Kania*/
    float principal, rate;
    int period;
    printf("Enter Principal amount :");
    scanf("%f",&principal);
    printf("Enter Rate of intrest :");
    scanf("%f",&rate);
    printf("Enter Time period in years :");
    scanf("%d",&period);
    Total_Amount(principal, rate, period);
    return 0;
}
float Total_Amount(float p, float r, int n)
{
    float total_amount=p;
    for(int i=0;i<n;i++)
    total_amount=total_amount*(1+r);
    float interest=total_amount-p;
    printf("Interest is %.2f\n",interest);
    printf("Toatl amount is %.2f",total_amount);
    return 0;
}