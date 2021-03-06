/*
** EPITECH PROJECT, 2017
** bistromatic
** File description:
** header of bistromatic
*/

#include <stdbool.h>

#include <stdint.h>

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
# define EXIT_SYNTAX	84

# define SYNTAX_ERROR_MSG	"syntax error"
# define ERROR_MSG		"error"

/* typedef */
typedef struct stack_elem {
	char			sign;
	int			weight;
	char			*value;
	struct stack_elem	*next;
} stack_elem_t;

typedef char *(*compute_pfunc_t)(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
typedef int(*verif_pfunc_t)(char *str);

/* compute functions */
char	*addinf(char *nb1, char *nb2);
char	*subinf(char *nb1, char *nb2);
char	*mulinf(char *nb1, char *nb2);
char	*divinf(char *nb1, char *nb2);
char	*modinf(char *nb1, char *nb2);
char	*c_add(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_sub(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_mul(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_div(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);
char	*c_mod(stack_elem_t *elem1, stack_elem_t *elem2, char *sign);

/* global functions */
void	initialize(char *base, char *ops);
void	initialize_stacks();
void	initialize_global_var(char *base, char *ops);
void	display_error(char *msg);

/* evalexpr */
char	*eval_expr(char *str);
void	compute_priority(stack_elem_t *elem);
void	compute(void);
void	next_op(void);
void	next_nb(void);
void	add_nb(stack_elem_t *nb);
void	add_op(stack_elem_t *op);
void	remove_after_compute(void);

/* verification syntax */
int	check_op_after_open_bracket(char *str);
int	check_digit_before_bracket(char *str);
int	check_digit_after_bracket(char *str);
int	check_last_char(char c);
int	check_first_char(char c);
int	check_double_op(char *str);
int	check_double_bracket(char *str);
int	check_char_in_base_or_op(char *str);
int	check_validity_base_or_op(char *str);
int	check_validity_base_and_op(char *base, char *ops);
void	check_syntax(char *str);
void	check_error(int ac, char **av);

/* evalexpr tools */
char	*char_to_str(char c);
char	*get_nbr(char **str, char *sign);
stack_elem_t	*get_elem_nbr(char **str);
stack_elem_t	*get_elem_op(char c);
int	is_bracket(char c);
int	is_high_op(char c);
int	is_low_op(char c);
int	is_op(char c);
int	is_nbr(char c);
int	get_weight(char op);
void	reverse_sign(stack_elem_t **elem);
void	set_bigger_first(stack_elem_t **elem1, stack_elem_t **elem2, bool rev_sign);

/* tools */
int	is_negative_number(char *str);
int	is_operator(char c);
int	get_number(char **str);

/* global variables */
extern	char		*OPS;
extern	char		*BASE;
extern	int		BASE_LENGTH;
extern	compute_pfunc_t	COMPUTE_ARR[];
extern	verif_pfunc_t	VERIF_ARR[];
extern	stack_elem_t	*STACK_OP;
extern	stack_elem_t	*STACK_NB;

#endif /* !BISTROMATIC_H_ */
