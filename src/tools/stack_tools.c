/*
** EPITECH PROJECT, 2017
** stack_tools
** File description:
** file
*/

int	add_number(char	*str, char sign)
{
	linked_nb_t *elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		return (0);
	elem->value = str;
	elem->sign = sign;
	elem->next = STACK_NB;
	STACK_NB = elem;
	return (1);
}

int	add_op(char op, int weight)
{
	linked_op_t *elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		return (0);
	elem->op = op;
	elem->weight = weight;
	elem->next = STACK_OP;
	STACK_OP = elem;
	return (1);
}

int	next_number(void);

int	next_op(void);

void	free_operation()
{
	void	*tmp;

	tmp = STACK_NB->next;
	free(STACK_NB->value);
	free(STACK_NB);
	STACK_NB = tmp;
	tmp = STACK_NB->next;
	free(STACK_NB->value);
	free(STACK_NB);
	tmp = STACK_OP->next;
	free(STACK_OP);
	STACK_NB = tmp;
}