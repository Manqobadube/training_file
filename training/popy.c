#include <stdio.h>

/**
 * main - popy file
 *
 * Return: 0
 */
int main(void)
{
	int size = 6;
	float was = 5.5;
	char initails = 'M';
	char name[25];

	printf("my shoe size is %d\n", size);
	printf("with my initail %c\n", initails);
	printf("at high school my shoe size was %.1f\n", was);

	printf("your name please:");
	scanf("%s", name);
        printf("street name is %s\n", name);	
	return (0);
}
