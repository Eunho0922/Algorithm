#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* llink;
    struct Node* rlink;
};

struct Node* head;

void init(void) {
    head->rlink = head;
    head->llink = head;
}

void insert(struct Node* before, int value) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = value;
    
    new->rlink = bef
    
}

void delete(struct Node* removed) {
    //4. 삭제 함수 작성
}

void print_list(void) {
    //5. 출력 함수 작성
}

int main(void) {
    head = (struct Node*)malloc(sizeof(struct Node));
    init();
    printf("삽입 단계\n");
    for (int i = 0; i < 5; i++) {
        //6. 삽입 함수 호출
        //7. 출력 함수 호출
    }

    printf("\n삭제 단계\n");
    for (int i = 0; i < 5; i++) {
        //8. 삭제 함수 호출
        //9. 출력 함수 호출
    }

    return 0;
}
