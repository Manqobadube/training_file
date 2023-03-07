#include <stdio.h>

int main(void)
{
	float iterm1 = 10.54;
	float iterm2 = 20.44;
	float iterm3 = 30.70;
		
	printf("Iterm 1: R%.2f\n", iterm1);
	printf("Iterm 2: R%.2f\n", iterm2);
	printf("Iterm 3: R%.2f\n", iterm3);

	double sum = (iterm1 + iterm2 + iterm3);
	printf("total iterms = %.2lf\n", sum);
	return (0);
}
