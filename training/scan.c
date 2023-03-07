#include <stdio.h>
/**
 * main - scan funtion
 *
 * Return: 0
 */
int main(void)
{
	int age;
	char n[25];

	printf("how old are you?");
	scanf("%d", &age);

	printf("I'm %d years old\n", age);

	printf("what is your name?");
	scanf("%s", n);
	
	printf("my name is %s\n", n);
	return (0);
}
