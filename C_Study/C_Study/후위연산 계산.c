#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

struct stacks {
    int stack[MAX_SIZE];
    int top;
};

//스택 작성
void init_stack(struct stacks* s) {
    s->top = -1;
}

int is_empty(struct stacks *s)
{
    return (s->top == -1);
}

int is_full(struct stacks *s)
{
    return (s->top == MAX_SIZE - 1);
}

void push(struct stacks *s, char c)
{
    if (is_full(s)) {
        printf("Stack is full.\n");
        return;
    }
    
    s->stack[++(s->top)] = c;
}

char pop(struct stacks *s)
{
    if (is_empty(s)) {
        printf("Stack is empty.\n");
        return '\0';
    }
    
    return s->stack[(s->top)--];
}


int calc_postfix(char exp[]) {
    struct stacks st;
    int first, second, value;
    int len = strlen(exp);
    char c;

    init_stack(&st);

    for (int i = 0; i < len; i++) {
        c = exp[i];
        if (c >= '0' && c <= '9') {
            push(&st, c-'0');
        } else {
            second = pop(&st);
            first = pop(&st);
            switch (c) {
                case '+':
                    value = first + second;
                    push(&st, value);
                    break;
                case '-':
                    value = first - second;
                    push(&st, value);
                    break;
                case '*':
                    value = first * second;
                    push(&st, value);
                    break;
                case '/':
                    value = first / second;
                    push(&st, value);
                    break;
            }
        }
    }
    return pop(&st);
}

int main(void) {
    printf("후위표기식은 : 82/3-32*+\n");
    printf("결과값은 %d\n", calc_postfix("82/3-32*+"));
    return 0;
}
