#include <stdio.h>

/**
 * main - if else staments
 * Return: 0
 */
int main(void)
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("you are accepted\n");
	}
	else if (age < 18)
	{
		printf("under age\n");
	}
	

	return (0);
}
