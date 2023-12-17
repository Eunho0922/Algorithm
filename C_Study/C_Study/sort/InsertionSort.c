//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort(void) {
//    for (int i = 1; i < MAX_SIZE; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && key < arr[j]) {
//            arr[j+1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
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
//    insertion_sort();
//    
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
