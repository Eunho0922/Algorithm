//#include <stdio.h>
//
//int main(void)
//{
//    int N, M, a, b, tmp = 0;
//    scanf("%d %d", &N, &M);
//    int arr[N];
//    for (int i = 0; i < N; i++) {
//        arr[i] = (i + 1);
//    }
//    for (int i = 0; i < M; i++) {
//        scanf("%d %d", &a, &b);
//        tmp = arr[a - 1];
//        arr[a - 1] = arr[b - 1];
//        arr[b - 1] = tmp;
//    }
//    for (int i = 0; i < N; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
