#include<stdio.h>
#include<string.h>
#define MAX_STACK_SIZE 100

struct stacks {
    char stack[MAX_STACK_SIZE];
    int top;
};

void init_stack(struct stacks* s) {
    s->top = -1;
}

//스택과 관련된 함수 모두 작성
int is_empty(struct stacks *s)
{
    if (s->top == -1) {
        printf("스택이 비어있습니다.");
        return 1;
    }
    return 0;

}
//구조체 StackType의 멤버 top을 활용하여 포화상태 확인
int is_full(struct stacks *s)
{
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("스택이 가득 찼어요");
        return 1;
    }
    return 0;
}
// 삽입함수
void push(struct stacks *s)
{
    if (is_full(s)) {
        printf("가득 차 있습니다.");
        return;
    }
    s->top += 1;
    s->stack[s->top] = s;
}

int pop(struct stacks *s)
{
    if (is_empty(s)) {
        printf("비어있어요");
    }
    return s->stack[s->top--];
}

char peek(struct stacks* s) {
    if (is_empty(s)) printf("error");
    else return s->stack[s->top];
}

//연산자 우선순위 결정하는 함수
int rank(char c) {
    if ((c == '(') || (c == ')'))
        return 0;
    else if ((c == '+') || (c == '-'))
        return 1;
    else if ((c == '*') || (c == '/'))
        return 2;
    else return -1;
}

//중위 -> 후위
void infix_to_postfix(char* s) {
    struct stacks st;
    char ch, c;
    int length = strlen(s);
    init_stack(&st);
    for (int i = 0; i < length; i++) {
        
        
        ch = s[i];
    switch (ch)
        case '/' :
        case '*' :
        case '-' :
        case '+' :
            while (rank(peek(s)) >= rank(ch)) {
                pop(s);
                printf("%s", s);
            }
            push(ch);
            break;
        case '(' :
            push(s);
            break;
        case ')' :
            pop(s);
            while (peek(s) != '('){
                printf("%c", s);
                pop(s);
            }
            break;
            default:
                printf("%c", ch);
            break;

    }

    while (! is_empty(s)) {
        pop(s);
        printf("%s" ,s);
    }
}

int main(void) {
    char* s = "(2+3)*4+9";
    printf("중위표기수식 %s\n", s);
    printf("후위표기수식 ");
    infix_to_postfix(s);
    return 0;
}
