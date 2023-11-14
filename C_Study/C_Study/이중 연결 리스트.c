//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//    int data;
//    struct Node* llink;
//    struct Node* rlink;
//};
//
//struct Node* head;
//
//void init(void) {
//    head->rlink = head;
//    head->llink = head;
//}
//
//void insert(struct Node* before, int value) {
//    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
//    new->data = value;
//    
//    new->rlink = before->rlink;
//    new->llink = before;
//    before->rlink->llink = new;
//    before->rlink = new;
//    
//}
//
//void delete(struct Node* removed) {
//    if (head == removed) { return; }
//    removed->llink->rlink = removed->rlink;
//    removed->rlink->llink = removed->llink;
//    free(removed);
//}
//
//void print_list(void) {
//
//}
//
//int main(void) {
//    head = (struct Node*)malloc(sizeof(struct Node));
//    init();
//    
//    insert(head, 10);
//    insert(head->rlink, 30);
//    insert(head->rlink, 20);
//    
//    printf("<- %d -> ", head->rlink->data);
//    printf("<- %d -> ", head->rlink->rlink->data);
//    printf("<- %d -> ", head->llink->data);
//    printf("NULL\n");
//    
//    insert(head->llink, 40);
//    
//    printf("<- %d -> ", head->rlink->data);
//    printf("<- %d -> ", head->rlink->rlink->data);
//    printf("<- %d -> ", head->llink->llink->data);
//    printf("<- %d -> ", head->llink->data);
//    printf("NULL\n");
//
//    delete(head->llink->llink);
//
//    printf("<- %d -> ", head->rlink->data);
//    printf("<- %d -> ", head->rlink->rlink->data);
//    printf("<- %d -> ", head->llink->data);
//    printf("NULL\n");
//
//
//    
//   
//
//
//
////    printf("삽입 단계\n");
////    for (int i = 0; i < 5; i++) {
////        //6. 삽입 함수 호출
////        //7. 출력 함수 호출
////    }
////
////    printf("\n삭제 단계\n");
////    for (int i = 0; i < 5; i++) {
////        //8. 삭제 함수 호출
////        //9. 출력 함수 호출
////    }
//
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//
//struct Node {
//    struct Node* llink;
//    int data;
//    struct Node* rlink;
//};
//
//struct Node* head;
//
//void init(void) {
//    head->llink = head;
//    head->rlink = head;
//}
//
//void insert(struct Node* before, int value) {
//    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
//    new->data = value;
//    
//    new->rlink = before->rlink;
//    new->llink = before;
//    before->rlink->llink = new;
//    before->rlink = new;
//}
//
//void delete(struct Node* removed) {
//    if (removed == head) {
//        return;
//    }
//    removed->llink->rlink = removed->rlink;
//    removed->rlink->llink = removed->llink;
//}
//
//void print_list(void) {
//    for (struct Node* p = head->rlink; p != head; p = p->rlink) {
//        printf("<- %d -> ", p->data);
//    }
//    printf("\n");
//}
//
//int main(void) {
//    head = (struct Node*)malloc(sizeof(struct Node));
//    init();
//    printf("삽입 단계\n");
//    for (int i = 0; i < 5; i++) {
//        insert(head, i);
//        print_list();
//    }
//    
//
//    printf("\n삭제 단계\n");
//    for (int i = 0; i < 5; i++) {
//        delete(head->rlink);
//        print_list();
//    }
//
//    return 0;
//}
