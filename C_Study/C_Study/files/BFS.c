#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 10
#define MAX_VERTICES 50

struct queue {
    int queue[MAX_QUEUE_SIZE];
    int front, rear;
};

void queue_init(struct queue* q) {
    for (int  i = 0; i < MAX_QUEUE_SIZE; i++)
        q->queue[i] = 0;
    q->front = 0;
    q->rear = 0;
}

int is_empty(struct queue* q) {
    return q->front == q->rear;
}

int is_full(struct queue* q) {
    return q->front == (q->rear + 1) % MAX_QUEUE_SIZE;
}

void enqueue(struct queue* q, int v) {
    if (is_full(q)) {
        printf("포화 상태\n");
    } else {
        q->queue[++q->front] = v;
    }
}

int dequeue(struct queue* q) {
    if (is_empty(q)) {
        printf("공백상태\n");
        return 0;
    }
    else {
        if (q->front == MAX_QUEUE_SIZE - 1) {
            q->front = -1;
        }
        return ++(q->front);
    }
}

struct Graph {
    int n;
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
};

int visited[MAX_VERTICES];

void graph_init(struct Graph* g) {
    g->n = 0;
    for(int i = 0; i < MAX_VERTICES; i++)
        for(int j = 0; j < MAX_QUEUE_SIZE; j++)
            g->adj_mat[i][j] = 0;
}

void insert_vertex(struct Graph* g) {
        if ((g->n + 1) > MAX_VERTICES) {
            printf("에러\n");
            return;
        }
        g->n += 1;
}

void insert_edge(struct Graph* g, int start, int end) {
        if (g->n <= start || g->n <= end || start < 0 || end < 0 || start == end) {
            printf("정점 번호 오류\n");
            return;
        }
        g->adj_mat[start][end] = 1;
        g->adj_mat[end][start] = 1;
}

void bfs(struct Graph* g, int v) {
    int w;
    struct queue q;
    queue_init(&q);
    visited[v] = 1;
    printf("%d 방문 -> ", v);
    enqueue(&q, v);
    while (!is_empty(&q)) {
        v = dequeue(&q);
        for (w = 0; w < g->n; w++) {
            if (!visited[w] && g->adj_mat[v][w] == 0) {
                visited[w] = 1;
                printf("%d 방문 -> ", w);
                enqueue(&q, w);
            }
        }
    }
}

int main(void) {
    struct Graph* g;
    g = (struct Graph*)malloc(sizeof(struct Graph));

    graph_init(g);

    for (int i = 0; i < 6; i++)
        insert_vertex(g);

    insert_edge(g, 0, 2);    insert_edge(g, 0, 4);
    insert_edge(g, 1, 5);    insert_edge(g, 2, 1);
    insert_edge(g, 2, 3);    insert_edge(g, 4, 5);

    printf("너비우선탐색\n");
    bfs(g, 0);
    printf("\n");

    free(g);
    return 0;
}
