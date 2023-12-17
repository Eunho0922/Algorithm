//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//    int data[MAX_QUEUE_SIZE];
//    int front, rear;
//};
//
//void init_queue(struct Queue* q)
//{
//    q->front = q->rear = -1;
//}
//
//int is_full(struct Queue* q) {
//    return q->rear == MAX_QUEUE_SIZE - 1;
//}
//
//int is_empty(struct Queue* q) {
//    return q->rear == q->front;
//}
//
//void enqueue(struct Queue* q, int item) {
//    if (is_full(q)) {
//        printf("Error");
//    }
//    q->data[++(q->rear)] = item;
//}
//
//int dequeue(struct Queue* q) {
//    if (is_empty(q)) {
//        printf("Error");
//    }
//    return q->data[++(q->front)];
//}
//
//void print_queue(struct Queue* q) { // 출력 형태 만들어주는 함수
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
//int main(void) {
//    int n;
//    struct Queue q;
//    init_queue(&q);
//
//    enqueue(&q, 10); print_queue(&q);
//    enqueue(&q, 20); print_queue(&q);
//    enqueue(&q, 30); print_queue(&q);
//    enqueue(&q, 40); print_queue(&q);
//    enqueue(&q, 50); print_queue(&q);
//
//    n = dequeue(&q); print_queue(&q);
//    n = dequeue(&q); print_queue(&q);
//    n = dequeue(&q); print_queue(&q);
//    n = dequeue(&q); print_queue(&q);
//    n = dequeue(&q); print_queue(&q);
//
//
//    return 0;
//}
