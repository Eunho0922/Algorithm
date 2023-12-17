//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//int patition(int left, int right) {
//    int pivot = arr[left];
//    int low = left + 1;
//    int high = right;
//    int tmp;
//    
//    while (low <= high) {
//        while (arr[low] < pivot) {
//            low++;
//        }
//        while (arr[high] > pivot) {
//            high--;
//        }
//        if (low <= high) {
//            tmp = arr[low];
//            arr[low] = arr[high];
//            arr[high] = tmp;
//        }
//        tmp = arr[left];
//        arr[left] = arr[high];
//        arr[high] = tmp;
//    }
//    
//    return high;
//}
//
//void quick_sort(int left, int right) {
//    if (left < right) {
//        int q = patition(left, right);
//        quick_sort(left, q - 1);
//        quick_sort(q + 1, right);
//    }
//}
//int main(void) {
//    srand(time(NULL));
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++)
//        arr[i] = rand() % 100;
//    
//    quick_sort(0, n - 1);
//    for (int i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//int partition(int left, int right) {
//    int pivot = arr[left]; // pivot 기준값은 배열의 가장 왼쪽 값으로 설정
//    int low = left + 1; // 초기화는 pivot 다음 인덱스로 설정
//    int high = right; // 오른쪽 끝 인덱스로 초기화
//    int tmp;
//
//    do{
//        do {
//            low++;  // low 인덱스 증가
//        } while (low <= right && arr[low] < pivot);  // 배열의 값이 pivot보다 작으면 계속 진행
//
//        do {
//            high--;  // high 인덱스 감소
//        } while (high >= (left+1) && arr[high] > pivot);  // 배열의 값이 pivot보다 크면 계속 진행
//
//        if (low < high) {
//            tmp = arr[low];
//            arr[low] = arr[high];
//            arr[high] = tmp;  // low와 high 위치의 값을 교환
//        }
//    } while(low < high);   // low가 high보다 작은 동안 반복
//    
//    tmp = arr[left];
//    arr[left] = arr[high];
//    arr[high] = tmp;   // 최종적으로 pivot과 high 위치를 교환
//
//    return high;   // 현재 Pivot이 위치한 곳 반환
//}
//
//void quick_sort(int left, int right) {
//    if (left < right) {
//        int q = partition(left, right);
//        quick_sort(left, q - 1);   // Pivot 기준 왼쪽 부분 정렬
//        quick_sort(q + 1, right);    //// Pivot 기준 오른쪽 부분 정렬
//    }
//}
//
//int main(void) {
//    srand(time(NULL));
//    int n = MAX_SIZE;
//    for (int i=0; i<n; i++)
//        arr[i]=rand()%100;
//
//    quick_sort(0,n-1);
//    
//    for(int i=0;i<n;i++)
//        printf("%d ",arr[i]);
//    
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//int patition(int left, int right) {
//    int pivot = arr[left];
//    int low = left + 1;
//    int high = right;
//    int tmp;
//
//     do{
//        do
//            low++;
//        while (arr[low] < pivot && low <= right);
//        do
//            high--;
//        while (arr[high] > pivot && high >= left + 1);
//        if (low < high) {
//            tmp = arr[low];
//            arr[low] = arr[high];
//            arr[high] = tmp;
//        }
//     } while (low > high);
//    tmp = arr[left];
//    arr[left] = arr[high];
//    arr[high] = tmp;
//    
//    return high;
//}
//
//void quick_sort(int left, int right) {
//    if (left < right) {
//        int q = patition(left, right);
//        quick_sort(left, q - 1);
//        quick_sort(q + 1, right);
//    }
//}
//int main(void) {
//    srand(time(NULL));
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++)
//        arr[i] = rand() % 100;
//
//    quick_sort(0, n - 1);
//    for (int i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}
//
