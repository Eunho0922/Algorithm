////#include<stdio.h>
////#include<stdlib.h>
////#include <time.h>
////#define MAX_SIZE 10
////
////int arr[MAX_SIZE];
////void Bubble_sort(void) {
////    int tmp;
////    for (int i = MAX_SIZE - 1; i > 0 ; i--) {
////        for (int j = 0; j < i; j++) {
////            if (arr[j] > arr[j + 1]) {
////                tmp = arr[j];
////                arr[j] = arr[j + 1];
////                arr[j + 1] = tmp;
////            }
////        }
////    }
////}
////
////int main(void) {
////    srand(time(NULL));
////    int n = MAX_SIZE;
////    for (int i = 0; i < n; i++) {
////        arr[i] = rand() % 100;
////    }
////
////    Bubble_sort();
////
////    for (int i = 0; i < n; i++) {
////        printf("%d ", arr[i]);
////    }
////    return 0;
////}
//
//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//    int data[MAX_QUEUE_SIZE];
//    int front, rear;
//};
//
//void init_queue(struct Queue *q)
//{
//    q->front = -1;
//    q->rear = -1;
//}
//
//int is_full(struct Queue* q) {
//    return q->rear == MAX_QUEUE_SIZE - 1;
//}
//
//int is_empty(struct Queue* q) {
//    return q->front == q->rear;
//}
//
//void enqueue(struct Queue* q, int item) {
//    if (is_full(q)) {
//        printf("포화상태\n");
//    }
//    else q->data[++q->rear] = item;
//}
//
//int dequeue(struct Queue* q) {
//    if (is_empty(q)) {
//        printf("공백상태\n");
//        return 0;
//    }
//    else {
//        return q->data[++q->front];
//    }
//}
//
//void print_queue(struct Queue* q) {
//    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//        if (i <= q->front || i > q->rear) {
//            printf("   |");
//        }
//        else {
//            printf("%d |", q->data[i]);
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    int n;
//    struct Queue q;
//    init_queue(&q);
//    
//    enqueue(&q, 10); print_queue(&q);
//    enqueue(&q, 20); print_queue(&q);
//    enqueue(&q, 30); print_queue(&q);
//    
//    n = dequeue(&q); print_queue(&q);
//    n = dequeue(&q); print_queue(&q);
//    n = dequeue(&q); print_queue(&q);
//    
//    return 0;
//}
