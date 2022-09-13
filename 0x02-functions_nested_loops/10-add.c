#include <stdio.h>

/**
  * add - Adds two values
  * @n1: The first number to be computed
  * @n2: The second number to be computed
  *
  * Return: Integer value
  */
int add(int n1, int n2)
{
	return (n1 + n2);
}

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
