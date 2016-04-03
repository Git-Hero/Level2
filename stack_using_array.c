#include <stdio.h>
#include <stdlib.h>
define LIMIT 100

struct stack {
	int top;
	int item[LIMIT];
};

void push(struct stack *s, int num) {
	if (s->top == LIMIT) {
		printf("Stack overflow!\n");
		exit(EXIT_FAILURE);
	}
	(s->item)[++(s->top)] = num;
}

void pop(struct stack *s) {
	if (s->top == 0) {
		printf("Stack underflow!\n");
		exit(EXIT_FAILURE);
	}
	--(s->top);
}

int gettop(struct stack s) {
	return (s->item)[s->top];
}

void printstack(struct stack *s) {
	int i = (s.top);
	for (; i>=0; i--)
		printf("%d ", (s->item)[i]);
	printf("\n");
}

int main() {
	struct stack s;
	s->top=-1;
	int n, c;
	do {
		printf("Enter your choice \n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. gettop\n");
		printf("4. printstack\n");
		scanf("%d", n);
		switch (&n) {
			case 1 : printf("Enter value "); scanf("%d", &n);
				 push(&s, n);
				 break;

			case 2 : pop(&s); break;

			case 3 : printf("%d is the top element\n", gettop(&s));
				 break;

			case 4 : printstack(s);
				 break;

			default : break;
		}
		printf("Try again(1/0) ? "); scanf("%d", &c);
	} while (c == 1);
	
	return 0;
}
