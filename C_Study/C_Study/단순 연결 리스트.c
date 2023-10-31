//#include <stdio.h>
//#include <stdlib.h>
//
//struct listnode {
//    int data;
//    struct listnode* link;
//};
//
//int main(void) {
//    struct listnode* head = NULL;
//    struct listnode* p = NULL;
//
//    head = (struct listnode*)malloc(sizeof(struct listnode));
//    p = (struct listnode*)malloc(sizeof(struct listnode));
//
//    
//    head->data = 10;
//    p->data = 20;
//    
//    head->link = p;
//    p->link = NULL;
//
//    printf("%d -> ", head->data);
//    printf("%d\n", head->link->data);
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>

struct Listnode {
    int data;
    struct Listnode* link;
};

struct Listnode* insert_first(struct Listnode* head, int value) {
    struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
    p->data = value;
    p->link = head;
    
    head = p;
    return head;
}

//struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
//    struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//    //연결 리스트 중간에 삽입하는 동작 작성
//    return head;
//}
//
//struct Listnode* delete_first(struct Listnode* head) {
//    struct Listnode* removed;
//    if (head == NULL) return NULL;
//    //연결 리스트 맨 앞 노드 삭제하는 동작 작성
//    return head;
//}
//
//struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
//    struct Listnode* removed;
//    //연결 리스트 중간 노드 삭제하는 동작 작성
//    return head;
//}
//
//void print_list(struct Listnode* head) {
//    struct Listnode* p;
//    //출력 함수 작성
//}

int main(void) {
    struct Listnode* head = NULL;
    head = (struct Listnode*)malloc(sizeof(struct Listnode));

    head->data = 10;
    head->link = NULL;
        
    insert_first(head, 5);
    
    printf("%d", insert_first(head, 5)->data);
//    for (int i = 0; i < 5; i++) {
//        head = //함수 호출(맨앞에 넣는 함수)
//        //출력함수 호출
//    }
//    for (int i = 0; i < 5; i++) {
//        head = //맨앞 노드 삭제하는 함수 호출
//        //출력 함수 호출
//    }
}
