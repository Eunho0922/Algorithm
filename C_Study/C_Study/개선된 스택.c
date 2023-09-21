#include<stdio.h>
#define MAX_STACK_SIZE 100
struct StackType{
    int data[MAX_STACK_SIZE]; //스택을 구조체 멤버로 넣음으로써 한 프로그램에서 여러 스택 만들 수 있음
    int top;
};

void init_stack(struct StackType *s)
{
    s->top = -1;
}

//구조체 StackType의 멤버 top을 활용하여 공백상태 확인
int is_empty(struct StackType *s)
{
    if (s->top == -1) {
        printf("스택이 비어있습니다.");
        return 1;
    }
    return 0;
    
}
//구조체 StackType의 멤버 top을 활용하여 포화상태 확인
int is_full(struct StackType *s)
{
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("스택이 가득 찼어요");
        return 1;
    }
    return 0;
}
// 삽입함수
void push(struct StackType *s, int item)
{
    if (is_full(s)) {
        printf("가득 차 있습니다.");
        return;
    }
    s->top += 1;
    s->data[s->top] = item;
}

int pop(struct StackType *s)
{
    if (is_empty(s)) {
        printf("비어있어요");
    }
    return s->data[s->top--];
}

int main(void)
{
    struct StackType s;  // 스택을 정적으로 생성

    init_stack(&s);   // 함수를 호출할 때 매개변수로 스택의 주소를 전달
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
}
