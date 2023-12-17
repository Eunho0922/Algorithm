//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void selection_sort(void) {
//    for (int i = 0; i < MAX_SIZE - 1; i++) {
//        for (int j = i + 1; j < MAX_SIZE ; j++) {
//            if (arr[j] < arr[i]) {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
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
//    selection_sort();
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//  return 0;
//}
