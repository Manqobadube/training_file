#include <stdio.h>

int main()
{
	int a;

	printf("the number ot shoes:");
	scanf("%d", &a);

	double b = (double) a / 2;

	printf("total number of shoes is %d that makes the number of pairs to be: %.2lf\n", a, b);
	return (0);
}
