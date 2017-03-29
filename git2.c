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
