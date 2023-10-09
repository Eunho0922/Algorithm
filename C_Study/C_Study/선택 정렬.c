#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

// 1 3 5 7 9 2 4 6 8 10

int arr[MAX_SIZE];
int select_sort(void) {
    int min  = 0;
    for (int i = 0; i < MAX_SIZE - 2; i++) {
        for (int j = i + 1 ;j < MAX_SIZE - 2; j++ ) {
            if (arr[min] >= arr[j]) {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    return 0;
}

int main(void) {
    int n = MAX_SIZE;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    select_sort();
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
