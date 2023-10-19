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
#include<stdio.h>
#define MAX_STACK_SIZE 100
#define MAX_STRING 100

struct element{
    int student_no;
    char name[MAX_STRING];
    char address[MAX_STRING];
}stack[MAX_STACK_SIZE];
int top = -1;

int is_full(void) {
    return top == MAX_STACK_SIZE - 1;
}

int is_empty(void) {
    return top == -1;
}

void push(struct element data) {
    if (is_full()) {
        printf("포화 상태 입니다.\n");
    } else {
        stack[++top] = data;
    }
}

struct element pop(void) {
    
}

int main() {
    struct element is = { 20220901, "JUNG", "대전"};
    struct element os;
    push(is);
    os = pop();
    printf("학번: %d\n", os.student_no);
  printf("이름: %s\n", os.name);
  printf("주소: %s\n", os.address);
    return 0;
}

