/*
** EPITECH PROJECT, 2017
** bistromatic
** File description:
** header of bistromatic
*/

#ifndef BISTROMATIC_H_
# define BISTROMATIC_H_

# define OP_OPEN_PARENT_IDX	0
# define OP_CLOSE_PARENT_IDX	1
# define OP_PLUS_IDX		2
# define OP_SUB_IDX		3
# define OP_NEG_IDX		3
# define OP_MULT_IDX		4
# define OP_DIV_IDX		5
# define OP_MOD_IDX		6

# define EXIT_USAGE	84
# define EXIT_BASE	84
# define EXIT_SIZE_NEG	84
# define EXIT_MALLOC	84
# define EXIT_READ	84
# define EXIT_OPS	84

# define SYNTAX_ERROR_MSG	"syntax error"
# define ERROR_MSG		"error"

/* typedef */
typedef struct linked_op {
	char			op;
	int			weight;
	struct linked_op	*next;
} linked_op_t;

typedef struct linked_nb {
	char			sign;
	char			*value;
	struct linked_nb	*next;
} linked_nb_t;

typedef char *(*pfunc_t)(linked_nb_t *, linked_nb_t *, char *);

/* compute functions */
char	*addinf(char *s1, char *s2);
char	*subinf(char *s1, char *s2);
char	*mulinf(char *s1, char *s2);
char	*divinf(char *s1, char *s2);
char	*modinf(char *s1, char *s2);

/* ptr functions */
char	*c_add(linked_nb_t *elem1, linked_nb_t *elem2, char *sign);
char	*c_sub(linked_nb_t *elem1, linked_nb_t *elem2, char *sign);
char	*c_mul(linked_nb_t *elem1, linked_nb_t *elem2, char *sign);
char	*c_div(linked_nb_t *elem1, linked_nb_t *elem2, char *sign);
char	*c_mod(linked_nb_t *elem1, linked_nb_t *elem2, char *sign);

/* initialize */
int	initialize(char *ops, char *base);
int	initialize_stacks();
int	initialize_global_var(char *ops, char *base);

/* evalexpr */
int	evalexpr(char *str);
int	compute_priority(char op);
int	add_number(char *str, char sign);
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
