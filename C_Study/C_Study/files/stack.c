//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//int stack[MAX_STACK_SIZE];
//int top = -1;
//
////포화상태 확인
//int is_full(void) {
//    if (top == MAX_STACK_SIZE - 1) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
//
//int is_empty(void) {
//    if (top == -1) {
//        return 1;
//    } else {
//        return 0;
//    }}
//
//void push(int n) {
//    if (is_full()) {
//        printf("가득 차 있습니다.");
//    } else {
//        stack[++top] = n;
//        return;
//    }
//}
//
//int pop(void) {
//    if (is_empty()) {
//        printf("비어있어요");
//        return 0;
//    } else {
//        return stack[top--];
//    }
//}
//
//int main(void) {
//    push(1);
//    push(2);
//    push(3);
//    printf("%d\n", pop());
//    printf("%d\n", pop());
//    printf("%d\n", pop());
//
//    return 0;
//}
