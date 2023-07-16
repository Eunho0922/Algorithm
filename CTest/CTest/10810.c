#include <stdio.h>

int main(void)
{
    int N, M, a, b, c;
    scanf("%d %d", &N, &M);
    int arr[100] = { 0 };
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int j = (a - 1); j <= (b - 1); j++) {
            arr[j] = c;
        }
    }
    for (int k = 0; k < N; k++) {
        printf("%d ", arr[k]);
    }
}
