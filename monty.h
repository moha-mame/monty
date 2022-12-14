#ifndef MONTY_H_
#define MONTY_H_

/* Libraries */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/* Global variables and structures*/

extern int fd;
int fd;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef void (*opcode_p)(stack_t **stack, unsigned int line_number);

/* Prototypes */
int read_monty(char *file);
int proc_monty(void);
int proc_lines(stack_t **, char (*)[1024], ssize_t, int *, int *);
opcode_p check_f(char *tkn, int *s, stack_t *stack, unsigned int count);
opcode_p check_stk_queue(char *tkn, int *s);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);

void _q_push(stack_t **stack, unsigned int line_number);
void push_at_end(stack_t **stack, stack_t *node);

void free_stack(stack_t *head);
void _reverse(stack_t **stack, unsigned int line_number);

int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
int _isdigit(char c);
int _isnumber(char *num);

#endif /* MONTY_H */
