#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isNull - check if string is nullable
 *
 * @s: string to verify
 *
 * Return: 1 if string is null.
 */
int _isNull(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (*s != '0')
	{
		return (0);
	}
	else
	{
		return (_isNull(s + 1));
	}
}

/**
 * _isNumber - check if string is a number
 *
 * @s: string to verify
 *
 * Return: 1 if string is a number.
 */
int _isNumber(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (!isdigit(*s))
	{
		return (0);
	}
	else
	{
		return (_isNumber(s + 1));
	}
}

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 *
 * @s: pointer to memory area
 * @b: constant
 * @n: number ot bytes to fill
 *
 * Return: write n bytes of value b
 */
int *_memset(int *s, int b, unsigned int n)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < n; cLoop++)
	{
		s[cLoop] = b;
	}

	return (s);
}

/**
 * _intermediate_multiply - multiplication by the number 2
 *
 * @prmResult: array of the current result
 * @prmCLoop: current index loop of the number 1
 * @prmDigit: current digit to multiply
 * @prmNum: Number 2 to multiply
 *
 * Return: integer number
 */
int *_intermediate_multiply(
	int *prmResult,
	int prmCLoop,
	int prmDigit,
	char *prmNum
) {
	int carry = 0, cLoop2 = 0, size = _strlen_recursion(prmNum), indexNumber;
	int digit, sum = 0;

	for (indexNumber = size - 1; indexNumber >= 0; indexNumber--)
	{
		digit = prmNum[indexNumber] - 48;
		sum = prmDigit * digit + prmResult[prmCLoop + cLoop2] + carry;
		carry = sum / 10;
		prmResult[prmCLoop + cLoop2] = sum % 10;
		cLoop2++;
	}

	if (carry > 0)
	{
		prmResult[prmCLoop + cLoop2] += carry;
	}

	return (prmResult);
}

/**
 * _revInt - create a reverted array of the result
 *
 * @prmNum: array result
 * @prmSize: size of the result
 *
 * Return: character array
 */
char *_revInt(int *prmNum, int prmSize)
{
	int digit, indexNumber1, indexNumber2;
	char *s;

	indexNumber1 = prmSize - 1;
	s = malloc(sizeof(char) * (prmSize + 1));

	for (indexNumber2 = 0; indexNumber2 < prmSize; indexNumber2++)
	{
		digit = prmNum[indexNumber1 - indexNumber2];
		s[indexNumber2] = digit + 48;
	}

	s[prmSize] = '\0';

	return (s);
}

/**
 * _multiply - multiplies two positive numbers.
 *
 * @prmNum1: char number 1
 * @prmNum2: char number 2
 *
 * Return: result.
 */
char *_multiply(char *prmNum1, char *prmNum2)
{
	int size1 = _strlen_recursion(prmNum1);
	int size2 = _strlen_recursion(prmNum2);
	int size = size1 + size2;
	int *result = malloc(sizeof(int) * size);
	int cLoop1 = 0, indexNumber1, digit1;
	char *s;

	if (result == NULL)
	{
		return (NULL);
	}

	if (size1 == 0 || size2 == 0)
	{
		return (NULL);
	}

	result = _memset(result, 0, size1 + size2);

	for (indexNumber1 = size1 - 1; indexNumber1 >= 0; indexNumber1--)
	{
		digit1 = prmNum1[indexNumber1] - 48;

		result = _intermediate_multiply(result, cLoop1, digit1, prmNum2);

		cLoop1++;
	}

	for (
		indexNumber1 = size - 1;
		indexNumber1 >= 0 && result[indexNumber1] == 0;
		indexNumber1--
	) {
		if (result[indexNumber1] != 0)
			break;
	}

	if (indexNumber1 == -1)
	{
		return (NULL);
	}

	size = indexNumber1 + 1;

	s = _revInt(result, indexNumber1 + 1);

	return (s);
}

/**
 * main - check the code for Holberton School students.
 *
 * @argc: number of arguments
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cLoop, hasNullableArgument;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (cLoop = 1; cLoop < argc; cLoop++)
	{
		if (!_isNumber(argv[cLoop]))
		{
			printf("Error\n");
			exit(98);
		}

		if (!hasNullableArgument && _isNull(argv[cLoop]))
			hasNullableArgument = 1;
	}

	if (hasNullableArgument)
		printf("%s\n", "0");
	else
		printf("%s\n", _multiply(argv[1], argv[2]));

	return (0);
}
