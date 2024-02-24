//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_VERTICES 50
//
//int visited[MAX_VERTICES];
//
//
//struct Graph {
//    int n; //정점의 개수
//    int adj_mat[MAX_VERTICES][MAX_VERTICES];
//};
//
////그래프 초기화
//void init(struct Graph* g) {
//    g->n = 0;
//    for (int i = 0;i < MAX_VERTICES; i++)
//        for (int j = 0; j < MAX_VERTICES; j++)
//            g->adj_mat[i][j] = 0;
//}
//
////정점 삽입 연산
//void insert_vertex(struct Graph* g, int v) {
//    if ((g->n + 1) > MAX_VERTICES) {
//        printf("정점 개수 초과\n");
//        return;
//    }
//    g->n += 1;
//}
//
////간선 삽입 연산
//void insert_edge(struct Graph* g, int start, int end) {
//    if (g->n <= start || g->n <= end) {
//        printf("정점 번호 오류\n");
//        return;
//    }
//    g->adj_mat[start][end] = 1;
//    g->adj_mat[end][start] = 1;
//}
//
////깊이 우선 탐색
//void dfs(struct Graph* g, int v) {
//    int w;
//    visited[v] = 1;
//    printf("정점 %d -> ", v);
//    for (w = 0; w < g->n; w++) {
//        if (visited[w] == 0 && g->adj_mat[v][w] == 1) {
//            dfs(g, w);
//        }
//    }
//}
//
//int main(void) {
//    struct Graph* g;
//    g = (struct Graph*)malloc(sizeof(struct Graph));
//    init(g);
//    
//    for (int i = 0; i < 4; i++)
//        insert_vertex(g, i);
//    
//    insert_edge(g, 0, 1);
//    insert_edge(g, 0, 2);
//    insert_edge(g, 0, 3);
//    insert_edge(g, 1, 2);
//    insert_edge(g, 2, 3);
//    
//    printf("깊이 우선 탐색\n");
//    dfs(g, 0);
//    free(g);
//    return 0;
//}
