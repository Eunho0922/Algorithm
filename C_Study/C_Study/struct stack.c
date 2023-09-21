//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//#define MAX_STRING 100
//
//struct element{
//    int student_no;
//    char name[MAX_STRING];
//    char address[MAX_STRING];
//}stack[MAX_STACK_SIZE];
//int top = -1;
//
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
//    }
//}
//
//void push(struct element data) {
//    if (is_full()) {
//        printf("가득 차 있습니다.");
//        return;
//    }
//        stack[++top] = data;
//}
//
//struct element pop() {
//    if (is_empty()) {
//        printf("비어있어요");
//        return;
//    }
//        return stack[--top];
//}
//
//int main(void) {
//    struct element is = { 20220901, "JUNG", "대전"};
//    struct element os;
//    push(is);
//    os = pop();
//    printf("학번: %d\n", os.student_no);
//    printf("이름: %s\n", os.name);
//    printf("주소: %s\n", os.address);
//    return 0;
//}
