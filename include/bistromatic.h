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
	char			sign;
	char			*nb;
	struct linked_nb	*next;
} linked_nb_t;

typedef char *(*pfunc_t)(char *, char *);

/* compute functions */
void	subinf(char *s1, char *s2, char sign);
void	mulinf(char *s1, char *s2, char sign);
void	divinf(char *s1, char *s2, char sign);
void	modinf(char *s1, char *s2, char sign);
void	addinf(char *s1, char *s2, char sign);

/* ptr functions */
void	c_add(char *s1, char *s2);
void	c_sub(char *s1, char *s2);
void	c_mul(char *s1, char *s2);
void	c_div(char *s1, char *s2);
void	c_mod(char *s1, char *s2);

/* initialize */
int	initialize(char *ops, char *base);
int	initialize_stacks();
int	initialize_global_var(char *ops, char *base);

/* evalexpr */
int	evalexpr(char *str);
int	compute_priority(char op);
int	add_number(int nb);
int	add_op(char op, int weight);
void	compute(void);

/* tools */
int	is_negative_number(char *str);
int	is_operator(char c);
int	get_weight(char op);
int	get_number(char **str);

/* global variables */
extern	char		*OPS;
extern	char		*BASE;
extern	int		BASE_LENGTH;
extern	pfunc_t		COMPUTE_ARR[];
extern	linked_nb_t	*STACK_NB;
extern	linked_op_t	*STACK_OP;

#endif /* !BISTROMATIC_H_ */
