#include <stdio.h>

int main(void)
{
    int count, find, result = 0;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find);
    for (int i = 0; i < count; i++) {
        if (arr[i] == find) { result++; }
    }
    printf("%d", result);
    return 0;
}
