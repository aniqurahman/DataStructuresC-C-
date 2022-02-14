#include <stdio.h>

int global = 10; /* initialized global variable stored in DS*/

int main(void)
{
	static int i = 100; /* Initialized static variable stored in DS*/
	int i; /* Uninitialized static variable stored in bss */
	return 0;
}