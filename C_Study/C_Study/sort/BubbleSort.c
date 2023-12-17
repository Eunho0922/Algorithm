//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void Bubble_sort(void) {
//    int tmp;
//    for (int i = MAX_SIZE - 1; i > 0 ; i--) {
//        for (int j = 0; j < i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//int main(void) {
//    srand(time(NULL));
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 100;
//    }
//    
//    Bubble_sort();
//    
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
