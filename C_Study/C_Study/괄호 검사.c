//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks{
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
//int is_match(char* c) {
//    struct stacks st;
//    char ch, open;
//    int length = strlen(c);
//    init_stack(&st);
//
//    for (int i = 0; i < length; i++) {
//        ch = c[i];
//
//        if (ch == '(' || ch == '{' || ch == '[') {
//            push(&st, ch);
//        } else {
//            if (pop(&st) == ch) {
//                continue;
//            }
//        }
//            return 0;
////        switch (ch) {
////            case '(':
////            case '{':
////            case '[':
////                push(&st, ch);
////                break;
////            case ')':
////                if (pop(&st) == '(') {
////                    break;
////                } else {
////                    return 0;
////                }
////            case '}':
////                if (pop(&st) == '{') {
////                    break;
////                } else {
////                    return 0;
////                }
////            case ']':
////                if (pop(&st) == '[') {
////                    break;
////                } else {
////                    return 0;
////                }
////            default:
////                break;
////        }
//    }
//    if (is_empty(&st)) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
//int main(void) {
//    char* p = "{A[(i+1)]=0;}";
//    if (is_match(p) == 1)
//        printf("%s 괄호 검사 성공!\n", p);
//    else
//        printf("%s 괄호 검사 실패!\n", p);
//
//    return 0;
//}
