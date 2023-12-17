//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_SIZE 10
//
//// 1 3 5 7 9 2 4 6 8 10
//
//int arr[MAX_SIZE];
//int select_sort(void) {
//    for (int i = 0; i < MAX_SIZE - 1; i++) {
//        int min  = i;
//        for (int j = i; j <= MAX_SIZE - 1 ; j++) {
//            if (arr[min] >= arr[j]) {
//                min = j;
//            }
//        }
//        if (i != min) { // 신기함 개선된 선택정렬 같을 때는 비교하지 않고 다를 때만 교환한다.
//            int tmp = arr[i];
//            arr[i] = arr[min];
//            arr[min] = tmp;
//        }
//    }
//    return 0;
//}
//
//int main(void) {
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    select_sort();
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//int selection_sort(void) {
//    for (int i = 0; i < MAX_SIZE - 1; i++) {
//        int min = i;
//        for (int j = i + 1; j <= MAX_SIZE - 1; j++) {
//            if (arr[min] >= arr[j]) {
//                min = j;
//            }
//        }
//        int tmp = arr[i];
//        arr[i] = arr[min];
//        arr[min] = tmp;
//    }
//    return 0;
//}
//
//int main(void) {
//    int n = MAX_SIZE;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    selection_sort();
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

// ✨ 선택 정렬 ✨
//#include <stdio.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//void selection_sort(void) {
//    for (int i = 0; i < MAX_SIZE - 1; i++) {
//        int min = i;
//        for (int j = i + 1; j < MAX_SIZE; j++) {
//            if (arr[min] >= arr[j]) {
//                min = j;
//            }
//        }
//        if (i != min) {
//            int tmp = arr[i];
//            arr[i] = arr[min];
//            arr[min] = tmp;
//        }
//    }
//}
//
//int main(void) {
//    for (int i = 0; i < MAX_SIZE; i++) {
//        scanf("%d", &arr[i]);
//    }
//    
//    selection_sort();
//    
//    for (int i = 0; i < MAX_SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    
//    return 0;
//}

//#include <stdio.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//void selection_sort(void) {
//    for (int i = 0; i < MAX_SIZE - 1; i++) {
//        int min = i;
//        for (int j = i; j < MAX_SIZE ;j++ ) {
//            if (arr[min] > arr[j]) {
//                min = j;
//            }
//        }
//        if (i != min) {
//            int tmp = arr[i];
//            arr[i] = arr[min];
//            arr[min] = tmp;
//        }
//    }
//}
//
//int main(void) {
//    for (int i = 0; i < MAX_SIZE; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    selection_sort();
//
//    for (int i = 0; i < MAX_SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


// O(n^2) O(n^2) O(n^2)
