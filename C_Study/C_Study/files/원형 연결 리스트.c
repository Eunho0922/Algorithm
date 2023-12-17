//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//    int data;
//    struct Node* link;
//};
//
//struct Node* head = NULL;
//
//void insert_first(int value) {
//    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//    node->data = value;
//    if (head == NULL) {
//        head = node;
//        node->link = node;
//    } else {
//        node->link = head->link;
//        head->link = node;
//    }
//}
//
//void insert_last(int value) {
//    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//    node->data = value;
//    if (head == NULL) {
//        head = node;
//        node->link = node;
//    } else {
//        node->link = head->link;
//        head->link = node;
//        head = node;
//    }
//}
//
//void delete(void) {
//    struct Node* removed = head->link;
//    head->link = removed->link;
//    free(removed);
//}
//
//void print_list(void) {
//    struct Node* p;
//    do {
//        if (head == NULL) break;
//    } while (p != head->link);
//    for (p = head->link; p != head; p = p->link) {
//        printf("%d -> ", p->data);
//    }
//    printf("NULL\n");
//}
//
//int main(void) {
//    head = (struct Node*)malloc(sizeof(struct Node));
//
//    insert_first(30);
//    insert_first(20);
//    insert_first(10);
//    insert_first(40);
//
//    printf("%d -> ", head->link->data);
//    printf("%d -> ", head->link->link->data);
//    printf("%d -> ", head->link->link->link->data);
//    printf("%d -> ", head->data);
//
//    printf("NULL\n");
//
//    insert_last(50);
//
//    printf("%d -> ", head->link->data);
//    printf("%d -> ", head->link->link->data);
//    printf("%d -> ", head->link->link->link->data);
//    printf("%d -> ", head->link->link->link->link->data);
//    printf("%d -> ", head->data);
//
//    printf("NULL\n");
//
//    delete();
//
//    printf("%d -> ", head->link->data);
//    printf("%d -> ", head->link->link->data);
//    printf("%d -> ", head->link->link->link->data);
//    printf("%d -> ", head->data);
//
//    printf("NULL\n");
//    print_list();
//
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//    int data;
//    struct Node* link;
//};
//
//struct Node* head = NULL;
//
//void insert_first(int value) {
//    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//    node->data = value;
//    if (head == NULL) {
//        head = node;
//        node->link = node;
//    } else {
//        node->link = head->link;
//        head->link = node;
//    }
//}
//
//void insert_last(int value) {
//    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//    node->data = value;
//    if (head == NULL) {
//        head = node;
//        node->link = node;
//    } else {
//        node->link = head->link;
//        head->link = node;
//        head = node;
//    }
//}
//
//void delete(void) {
//    struct Node* removed = head->link;
//    head->link = removed->link;
//    free(removed);
//}
//
//void print_list(void) {
//    struct Node* p = head->link;
//    if (head == NULL) return;
//    do {
//        printf("%d -> ", p->data);
//        p = p->link;
//    } while (p != head->link);
//    printf("\n");
//}
//
//int main(void) {
//    
//    insert_first(20);
//    insert_last(40);
//    insert_first(10);
//    insert_first(30);
//    
//    print_list();
//    
//    delete();
//    
//    print_list();
//    
//    delete();
//    
//    print_list();
//    return 0;
//}
