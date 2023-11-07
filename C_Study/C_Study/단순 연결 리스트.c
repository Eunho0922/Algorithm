//#include <stdio.h>
//#include <stdlib.h>

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

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Listnode {
//    int data;
//    struct Listnode* link;
//};
//
//struct Listnode* insert_first(struct Listnode* head, int value) {
//    struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//    p->data = value;
//    p->link = head;
//    
//    head = p;
//    return head;
//}
//
//struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
//    struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//    p->data = value;
//    p->link = pre->link;
//    pre->link = p;
//    return head;
//}
//
//struct Listnode* delete_first(struct Listnode* head) {
//    struct Listnode* removed;
//    if (head == NULL) return NULL;
//    removed = head;
//    head = removed->link;
//    free(removed);
//    return head;
//}
//
//struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
//    struct Listnode* removed;
//    removed = pre->link;
//    pre->link = pre->link->link;
//    free(removed);
//    
//    return head;
//}
//
//void print_list(struct Listnode* head) {
//    struct Listnode* p;
//    for (; <#condition#>; <#increment#>) {
//        <#statements#>
//    }
//}
//
//int main(void) {
//    struct Listnode* head = NULL;
//    head = (struct Listnode*)malloc(sizeof(struct Listnode));
//    
//    struct Listnode* pre = NULL;
//    pre = (struct Listnode*)malloc(sizeof(struct Listnode));
//
//    pre->data = 11;
//    pre->link = NULL;
//
//    head->data = 10;
//    head->link = NULL;
//    
//    head = insert(head, pre, 1);
//    
//        
//    head = insert_first(head, 5);
//    
//    pre = head;
//    head = delete(head, pre);
//
////
////    printf("%d", delete_first(head));
////    for (int i = 0; i < 5; i++) {
////        head = //함수 호출(맨앞에 넣는 함수)
////        //출력함수 호출
////    }
////    for (int i = 0; i < 5; i++) {
////        head = //맨앞 노드 삭제하는 함수 호출
////        //출력 함수 호출
////    }
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

struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
    struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
    p->data = value;
    p->link = pre->link;
    pre->link = p;
    return head;
}

struct Listnode* delete_first(struct Listnode* head) {
    struct Listnode* removed;
    if (head == NULL) return NULL;
    removed = head;
    head = removed->link;
    free(removed);
    return head;
}

struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
    struct Listnode* removed;
    removed = pre->link;
    pre->link = pre->link->link;
    free(removed);
    
    return head;
}

void print_list(struct Listnode* head) {
    struct Listnode* p;
    for (p = head; p != NULL; p = p->link) {
        printf("%d -> ", p->data);
    }
    printf("NULL\n");
}

int main(void) {
    struct Listnode* head = NULL;
    for (int i = 0; i < 5; i++) {
        head = insert_first(head, i);
        print_list(head);
    }
    head = insert(head, head->link, 100);
    print_list(head);
    head = delete(head, head->link);
    print_list(head);
    
    for (int i = 0; i < 5; i++) {
        head = delete_first(head);
        print_list(head);
    }
}
