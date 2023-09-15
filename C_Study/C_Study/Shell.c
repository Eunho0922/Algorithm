//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//void insertion_sort(int arr[], int first, int last, int gap) {
//    int i, j, key;
//    for (i = first + gap; i <= last; i += gap) {
//        key = arr[i];
//        for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
//            int tmp = arr[j];
//            arr[j] = arr[j + gap];
//            arr[j + gap] = tmp;
//        }
//    }
//}
//
//void shell_sort(int arr[], int n) {
//    int i, gap;
//    for (gap = n / 2;gap >= 1; gap = gap / 2) {
//        if (gap % 2 == 0) gap++;
//        for (i = 0; i < gap; i++) {
//            insertion_sort(arr, i, n, gap);
//        }
//    }
//}
//
//int main(void) {
//    int n = MAX_SIZE;
//    srand(time(NULL));
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 100;
//    }
//
//    shell_sort(arr, n);
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
