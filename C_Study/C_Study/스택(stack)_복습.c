//------------------------ ✨ 1차원 배열 스택 ✨
//#include <stdio.h>
//#define MAX_STACK_SIZE 5
//int arr[MAX_STACK_SIZE];
//int top = -1;
//
//int is_empty(void) {
//    return top == -1;
//}
//
//int is_full(void) {
//    return top == MAX_STACK_SIZE - 1;
//}
//
//void push(int item) {
//    if (is_full()) {
//        printf("포화 상태 입니다.\n");
//    } else {
//        arr[++top] = item;
//    }
//}
//
//int pop(void) {
//    if (is_empty()) {
//        printf("공백 상태 입니다.\n");
//        return 0;
//    } else {
//        return arr[top--];
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
//}

//------------------------ ✨ 구조체 배열 스택 ✨
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
//    return top == MAX_STACK_SIZE - 1;
//}
//
//int is_empty(void) {
//    return top == -1;
//}
//
//void push(struct element data) {
//    if (is_full()) {
//        printf("포화 상태 입니다.\n");
//    } else {
//        stack[++top] = data;
//    }
//}
//
//struct element pop(void) {
//    
//}
//
//int main() {
//    struct element is = { 20220901, "JUNG", "대전"};
//    struct element os;
//    push(is);
//    os = pop();
//    printf("학번: %d\n", os.student_no);
//  printf("이름: %s\n", os.name);
//  printf("주소: %s\n", os.address);
//    return 0;
//}

//------------------------ ✨ 개선된 스택 ✨
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//struct StackType{
//    int data[MAX_STACK_SIZE]; //스택을 구조체 멤버로 넣음으로써 한 프로그램에서 여러 스택 만들 수 있음
//    int top;
//};
//
//// 스택 초기화 함수
//void init_stack(struct StackType *s)
//{
//    s->top = -1;
//}
//
////구조체 StackType의 멤버 top을 활용하여 공백상태 확인
//int is_empty(struct StackType *s)
//{
//    return s->top == -1;
//}
////구조체 StackType의 멤버 top을 활용하여 포화상태 확인
//int is_full(struct StackType *s)
//{
//    return s->top == MAX_STACK_SIZE - 1;
//}
//// 삽입함수
//void push(struct StackType *s, int item)
//{
//    if (is_full(s)) {
//        printf("포화 상태 입니다.\n");
//    } else {
//        s->data[++(s->top)] = item;
//    }
//}
//// 삭제함수
//int pop(struct StackType *s)
//{
//    if (is_empty(s)) {
//        printf("공백 상태 입니다.\n");
//        return 0;
//    } else {
//        return s->data[(s->top)--];
//    }
//}
//int main(void)
//{
//    struct StackType s;  // 스택을 정적으로 생성
//
//    init_stack(&s);   // 함수를 호출할 때 매개변수로 스택의 주소를 전달
//    push(&s, 1);
//    push(&s, 2);
//    push(&s, 3);
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//    printf("%d\n", pop(&s));
//}
//
