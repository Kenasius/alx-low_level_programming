#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digits
 * @str: array string
 *
 * Return: Always 0 on success
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts string*/

	{
		if (!isdigit(str[count])) /*checks if strings there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prins the name of program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition, if one of the number contains symbols that isnt digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
