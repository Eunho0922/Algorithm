//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort(int n) {
//    for (int i = 0; i < n - 1 ; i++) {
//        for (int j = 0; j <= n - i - 2;j++ ) {
//            if (arr[j] >= arr[j + 1]) {
//                int tmp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//}
//
//
//int main(void) {
//    srand(time(NULL));
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 100;
//    }
//
//    Bubble_sort(n);
//    for (int i = 0;i < n ; i++) {
//        printf("%d ", arr[i]);
//    }
//
//  return 0;
//}
