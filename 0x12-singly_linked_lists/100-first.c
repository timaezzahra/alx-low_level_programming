#include "lists.h"

void _print(void) __attribute__ ((constructor));
/**
  * _print - print before the main function is executed.
  * Return: void
  */

void _print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"²I bore my house upon my back!\n");
}
