#include <stdio.h>
/**
 * main - more else if
 *
 * Return: 0
 */
int main(void)
{
char grade;

printf("Enter a letter grade: ");
scanf("%c", &grade);

if (grade == 'A'){
	printf("perfect\n" );
}
else if (grade == 'B'){
	printf("you did good\n");
}
else if (grade == 'C'){
	printf("you did okey\n");
}
else if (grade == 'D'){
	printf("at least its not an F\n");
}
else{
	printf("that's not valid\n");
}
return (0);
}
