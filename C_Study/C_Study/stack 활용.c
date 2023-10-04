//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks {
//    char stack[MAX_STACK_SIZE];
//    int top;
//};
//
//void init_stack(struct stacks* s) {
//    s->top = -1;
//}
//
//int is_empty(struct stacks *s)
//{
//    return (s->top == -1);
//}
//
//int is_full(struct stacks *s)
//{
//    return (s->top == MAX_STACK_SIZE - 1);
//}
//
//void push(struct stacks *s, char c)
//{
//    if (is_full(s)) {
//        printf("Stack is full.\n");
//        return;
//    }
//    
//    s->stack[++(s->top)] = c;
//}
//
//char pop(struct stacks *s)
//{
//    if (is_empty(s)) {
//        printf("Stack is empty.\n");
//        return '\0';
//    }
//    
//    return s->stack[(s->top)--];
//}
//
//char peek(struct stacks* s) {
//    if (!is_empty(s))
//        return s->stack[s->top];
//    
//    printf("Stack is empty.\n");
//    return '\0';
//}
//
//int rank(char c) {
//    switch(c){
//        case '(':
//        case ')':
//            return 0;
//        case '+':
//        case '-':
//            return 1;
//        case '*':
//        case '/':
//            return 2;
//    }
//    
//    return -1;
//}
//
//
//void infix_to_postfix(char* expr) {
//    struct stacks st;
//    init_stack(&st);
//    
//    for(int i = 0; i < strlen(expr); i++) {
//        char ch = expr[i];
//        
//        switch(ch){
//            case '+':
//            case '-':
//            case '*':
//            case '/':
//                while(!is_empty(&st) && rank(peek(&st)) >= rank(ch)) {
//                    printf("%c", pop(&st));
//                }
//                push(&st, ch);
//                break;
//                
//            case '(':
//                push(&st, ch);
//                break;
//                
//            case ')':
//                while(!is_empty(&st) && peek(&st) != '(') {
//                    printf("%c", pop(&st));
//                }
//                pop(&st);
//                break;
//                
//            default:
//                printf("%c", ch);
//                break;
//        }
//    }
//    
//    while(!is_empty(&st)) {
//        printf("%c", pop(&st));
//    }
//    
//}
//
//
//int main(void) {
//    char* s = "(2+3)*4+9";
//    printf("Infix notation: %s\n", s);
//    printf("Postfix notation: ");
//    infix_to_postfix(s);
//    return 0;
//}
