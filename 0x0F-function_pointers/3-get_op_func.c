#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - find operation function
 * @s: operator (+, -, *, /, %)
 * Return: function pointer
 */

int (*get_op_func(char *s))(int, int)

{
	int i;

	 op_t ops[] = {

		 {"+", op_add},
		 {"-", op_sub},
		 {"*", op_mul},
		 {"/", op_div},
		 {"%", op_mod},
		 {NULL, NULL}

	};

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
