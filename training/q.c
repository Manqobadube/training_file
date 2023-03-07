#include <stdio.h>

int main (void)
{
float a;


printf("the number of liters in weist: ");
scanf("%f", &a);
double c = a * 2;
printf("total weist: %.2lf\n", c);



if (a == 5)
{
printf("miximum volume reached!\n");
}
else if (a > 5)
{
printf("over flow\n");
}

return (0);
}
