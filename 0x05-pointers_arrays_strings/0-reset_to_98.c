#include <stdio.h>

/**
 * reset_to_98 - Takes a pointer to an int and updates
 * the value it points to to 98
 *
 * @n: An integer input pointer
 *
 * Return : nothing
 */
void reset_to_98(int n)
{
	int *p = &n;
	*p = 98;
	printf("%d\n",n);

}
