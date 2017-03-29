#include <stdio.h>

float proffit(int vklad, int dni);

int main()
{
    int time, sum;

    printf("enter time to deposit: \n");
    scanf("%i", &time);
    printf("enter sum to deposit: \n");
    scanf("%i", &sum);
    if ((time <= 0) || (time > 365) || (sum < 10000))
        printf("enter correct data! \n");
    else {
        printf("sum at the end of: ");
        printf("%.0f \n", proffit(sum, time));
        printf("proffit of deposit: ");
        printf("%.0f \n", proffit(sum, time) - sum);
    }
    return 0;
}
float proffit(int vklad, int dni)
{
    float cashback = vklad;
    if (vklad < 100000) {
        if ((dni > 0) && (dni <= 30))
            cashback *= 0.9;
        if ((dni > 30) && (dni <= 120))
            cashback *= 1.02;
        if ((dni > 120) && (dni <= 240))
            cashback *= 1.06;
        if ((dni > 240) && (dni <= 365))
            cashback *= 1.12;
    } else {
        if ((dni > 0) && (dni <= 30))
            cashback *= 0.9;
        if ((dni > 30) && (dni <= 120))
            cashback *= 1.03;
        if ((dni > 120) && (dni <= 240))
            cashback *= 1.08;
        if ((dni > 240) && (dni <= 365))
            cashback *= 1.15;
    }
    return cashback;
}
