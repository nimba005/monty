#include "monty.h"
/**
 * malloc_m - display  a message while error
 */
void mallo_m(void)
{
	dprintf(2, "Error: malloc failed\n");
	ags_free();
	exit(EXIT_FAILURE);
}
