//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//int partition(int left, int right) {
//    int pivot = arr[left];
//    int low = left + 1;
//    int high = right;
//    int tmp;
//
//     do{
//        while (low <= high && arr[low] <= pivot)
//            low++;
//        while (high >= low && arr[high] >= pivot)
//            high--;
//        if (low < high) {
//            tmp = arr[high];
//            arr[high] = arr[low];
//            arr[low] = tmp;
//        }
//     } while (low <= high);
//    
//         tmp = arr[left];
//         arr[left] = arr[high];
//         arr[high] = tmp;
//    
//    return high;
//}
//
//void quick_sort(int left, int right) {
//    if (left < right) {
//        int q = partition(left, right);
//        quick_sort(left, q-1);
//        quick_sort(q+1, right);
//    }
//}
//                   
//int main(void) {
//    srand(time(NULL));
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++)
//        arr[i] = rand() % 100;
//
//    quick_sort(0, n - 1);
//    
//   for (int i=0; i<n; i++)
//      printf("%d ",arr[i]);
//   
//   return 0;
//}
