#include "monty.h"
/**
 * main - Start point of the prog
 * @agc: args num
 * @agv: array of args
 * Return: SUCCESS ZERO
 */
int main(int agc, char **agv)
{
	size_t z = 0;

	v_args(agc);
	i_args();
	g_s(agv[1]);

	while (getline(&args->1, &z, args->s) != -1)
	{
		args->1_n += 1;
		tokenizer();
		g_ins();
		run();
		free_tok();
	}
	c_file();
	ags_free();
	return (0);
}
