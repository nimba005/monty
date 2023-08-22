#include "monty.h"

/**
 * gs_message - message for getting stream error
 * @filename: pathname to f=the file
 */
void gs_message(char *filename)
{
dprintf(2, "Error: Can't open file %s\n", filename);
ags_free();
exit(EXIT_FAILURE);
}

/**
 * g_s - open, read file
 * @filename: pathname to the file
 */
void g_s(char *filename)
{
int fd;
fd = open(filename, O_RDONLY);
if (fd == -1)
gs_message(filename);
args->s = fdopen(fd, "r");
if (args->s == NULL)
{
close(fd);
gs_message(filename);
}
}
