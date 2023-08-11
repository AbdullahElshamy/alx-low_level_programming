#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
pintf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
pintf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
pintf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
pintf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
pintf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
