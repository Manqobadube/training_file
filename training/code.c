#include <stdio.h>
/**
*main - code
*
*Return: 0
*/

int main(void)
{
char name[25];
int password;
char gender;


printf("Enter your user name ");
scanf("%s", name);
printf("User name: %s\n", name);

printf("Enter your password ");
scanf("%d", &password);
printf("Password: %d\n", password);

printf("Enter your gender M or F? ");
scanf("\n%c", &gender);


if (gender == 'M')
{
printf("male\ncongratulation\n");
}
else if (gender == 'F')
{
printf("female\ncongratulaion\n");
}
else
{
printf("No mutch\nops\n");
}
return (0);
}
