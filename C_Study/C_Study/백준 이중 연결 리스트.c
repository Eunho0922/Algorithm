//#include<stdio.h>
//#include<stdlib.h>
//
//// 3045
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
//void type_A(int first, int second) {
//    struct Node* first_node = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* second_node = (struct Node*)malloc(sizeof(struct Node));
//
//    for (int i = 1; i <= first; i++) {
//        first_node = first_node->rlink;
//    }
//}
//
//void type_B(int first, int second) {
//    
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
//    char cal_chr;
//    int first_node, second_node, node_num, cal_num;
//    scanf("%d %d", &node_num, &cal_num);
//    printf("삽입 단계\n");
//    for (int i = 1; i <= node_num; i++) {
//        insert(head, i);
//    }
//    
//    for (int j = 1; j <= cal_num; j++) {
//        scanf("%c %d %d", &cal_chr, &first_node, &second_node);
//        switch (cal_chr) {
//            case 'A':
//                type_A(first_node, second_node);
//                break;
//            case 'B':
//                type_B(first_node, second_node);
//                break;
//            default:
//                break;
//        }
//    }
//    
//    
//    return 0;
//}

//#include <stdio.h>
//
//void increase(int n){
//    n = n + 1;
//}
//
//int main() {
//    int n = 10;
//    increase(n);
//    printf("%n", n);
//    return 0;
//}
