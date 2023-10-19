//#include<stdio.h>
//#define MAX_LIST_SIZE 5
//
//struct List {
//    int array[MAX_LIST_SIZE]; //리스트로 사용할 배열 정의
//    int size;  // 현재 리스트에 저장된 항목들의 개수
//};
//
//void init_list(struct List* L) {
//    L->size = 0;
//}
//
//int is_full(struct List* L) {
//    return L->size == MAX_LIST_SIZE - 1;
//}
//
//int is_empty(struct List* L) {
//    return L->size == 0;
//}
//
//void print_list(struct List* L) {
//    for (int i = 0; i <= L->size - 1; i++) {
//        printf("%d -> ", L->array[i] );
//    }
//    printf("\n");
//}
//
//void insert_last(struct List* L, int item) {
//    if (is_full(L)) {
//        printf("포화상태\n");
//    }
//    else {
//        L->array[(L->size)++] = item;
//    }
//}
//
//void insert(struct List* L, int pos, int item) {
//    if (is_full(L)) printf("포화상태\n");
//    else if (!is_full(L) && pos >= 0 && pos <= L->size) {
//        for (int i = L->size - 1; i >= pos; i--) {
//            L->array[i + 1] = L->array[i];
//        }
//        L->array[pos] = item;
//        L->size++;
//    }
//    else printf("위치오류\n"); // 경우의 수3
//}
//
//int delete(struct List* L, int pos) {
//    int item;
//    if (is_empty(L)) { //경우의 수1
//        printf("공백상태\n");
//        return 0;
//    }
//    else if (pos < 0 && pos > L->size - 1) {
//        printf("위치오류\n");
//    }
//    item = L->array[pos]; // 경우의 수3
//    
////    for (int i = pos; i <= L->size - 1; i++) {
////        L->array[i] = L->array[i + 1];
////    }
//    
////    for (int i = L->size - 1; i > pos; i--) {
////        L->array[pos] = L->array[pos + 1];
////    }
//    L->size--;
//    return item;
//}
//
//int main(void) {
//    struct List list;
//
//    init_list(&list);
//    insert(&list, 0, 10);    print_list(&list);
//    insert(&list, 0, 20);    print_list(&list);
//    insert(&list, 0, 30);    print_list(&list);
//    insert_last(&list, 40);    print_list(&list);
//    delete(&list, 0);    print_list(&list);
//
//    return 0;
//}
