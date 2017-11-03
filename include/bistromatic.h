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
typedef int	bool;
enum {true, false};

typedef struct stack_elem {
	char			sign;
	int			weight;
	char			*value;
	struct stack_elem	*next;
} stack_elem_t;

typedef char *(*pfunc_t)(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);

/* compute functions */
char	*addinf(char *nb1, char *nb2);
char	*subinf(char *nb1, char *nb2);
char	*mulinf(char *nb1, char *nb2);
char	*divinf(char *nb1, char *nb2);
char	*modinf(char *nb1, char *nb2);

/* ptr functions */
char	*c_add(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_sub(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_mul(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_div(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_mod(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);

/* initialize */
void	initialize(char *ops, char *base);
void	initialize_stacks();
void	initialize_global_var(char *ops, char *base);

/* evalexpr */
int	eval_expr(char *str);
void	compute_priority(stack_elem_t *elem);
void	add_nb(stack_elem_t *nb);
void	add_op(stack_elem_t *op);
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
extern	stack_elem_t	*STACK_NB;
extern	stack_elem_t	*STACK_OP;

#endif /* !BISTROMATIC_H_ */
