#include <stdio.h>
#include <ctype.h>

int main()
{
	char unit;
	float temp;

	printf("\n Is the temperature in (F) or (C)?: ");
	scanf("%c", &unit);

	if (unit == 'C')
	{
		printf(" the temp is currently in C\n");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("\nthe temp in Feranheit is: %.2f", temp);
	}
	else if (unit == 'F')
	{
		printf("the temp is in F\n");
	}
	else
	{
		printf("invalid statement\n");
	}
	return (0);
}
