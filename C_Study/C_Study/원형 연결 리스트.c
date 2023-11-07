#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* head;

void insert_first(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    if (head == NULL) {
        head->link = head;
        head->data = value;
    } else {
        node->link = head->link;
        head->link = node;
    }
}

void insert_last(int value) {
    //작성하기
}

void delete(void) {
    //작성하기
}

void print_list(void) {
    //작성하기
}

int main(void) {
    head = (struct Node*)malloc(sizeof(struct Node));
//    insert_last(10);
//    insert_last(20);
    insert_first(30);
    printf("%d\n", head->data);
    insert_first(20);
    printf("%d\n", head->link->data);
    insert_first(10);
    printf("%d\n", head->link->link->data);
    insert_first(40);
    printf("%d\n", head->link->link->link->data);

   


//    insert_last(40);

//    print_list();

//    delete();
//    print_list();
//
//    delete();
//    print_list();

    return 0;
}
