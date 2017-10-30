/*
** EPITECH PROJECT, 2017
** bistromatic
** File description:
** header of bistromatic
*/

#ifndef BISTROMATIC_H_
# define BISTROMATIC_H_

/* typedef */
typedef struct linked_op {
	char			op;
	int			weight;
	struct linked_op	*next;
} linked_op_t;

typedef struct linked_nb {
	int			nb;
	struct linked_nb	*next;
} linked_nb_t;

typedef char *(*pfunc_t)(char *, char *);

/* compute functions */
char	*addinf(char *s1, char *s2);
char	*subinf(char *s1, char *s2);
char	*mulinf(char *s1, char *s2);
char	*divinf(char *s1, char *s2);
char	*modinf(char *s1, char *s2);

/* initialize */
int	initialize(linked_nb_t **stack_nb, linked_op_t **stack_op);
int	initialize_stacks(linked_nb_t **stack_nb, linked_op_t **stack_op);
int	initialize_global_var(void);

/* evalexpr */
int	evalexpr(char *str);
int	compute_priority(linked_nb_t **stack_nb, linked_op_t **stack_op,
	char op);
int	add_number(linked_nb_t **stack_nb, int nb);
int	add_op(linked_op_t **stack_op, char op, int weight);
void	compute(linked_nb_t **stack_nb, linked_op_t **stack_op);

/* tools */
int	is_negative_number(char *str);
int	is_operator(char c);
int	get_weight(char op);
int	get_number(char **str);

/* global variables */
extern	char	*ops;
extern	pfunc_t	compute_arr[];

#endif /* !BISTROMATIC_H_ */
