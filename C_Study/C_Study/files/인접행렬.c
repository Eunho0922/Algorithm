//#include<stdio.h>
//#include<stdlib.h>
//
//#define MAX_VERTICES 50
//
//struct Graph {
//    int n; //정점의 수
//    int adj_mat[MAX_VERTICES][MAX_VERTICES];
//};
//
////초기화
//void init(struct Graph* g) {
//    g->n = 0;
//    for (int r = 0; r < MAX_VERTICES; r++) {
//        for (int c = 0; c < MAX_VERTICES; c++) {
//            g->adj_mat[r][c] = 0;
//        }
//    }
//}
//
////정점 삽입
//void insert_vertex(struct Graph* g) {
//    if ((g->n + 1) > MAX_VERTICES) {
//        printf("그래프 : 정점 개수 초과\n");
//        return;
//    }
//    g->n += 1;
//}
//
////간선 삽입
//void insert_edge(struct Graph* g, int start, int end) {

//}
//
////인접 행렬 출력
//void print(struct Graph* g) {
//    for (int r = 0; r < g->n; r++) {
//        for (int c = 0; c < g->n; c++) {
//            printf("%d ", g->adj_mat[r][c]);
//        }
//        printf("\n");
//    }
//}
//
//int main(void) {
//    struct Graph* g;
//    g = (struct Graph*)malloc(sizeof(struct Graph));
//
//    init(g);
//
//    for (int i = 0; i < 4; i++) {
//        insert_vertex(g);
//    }
//
//    insert_edge(g, 0, 1);
//    insert_edge(g, 0, 2);
//    insert_edge(g, 0, 3);
//    insert_edge(g, 1, 2);
//    insert_edge(g, 2, 3);
//
//    print(g);
//
//    free(g);
//
//    return 0;
//}
