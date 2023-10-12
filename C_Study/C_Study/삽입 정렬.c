// ✨ 의사코드 보고 코딩 ✨
//#include <stdio.h>
//#define MAX_SIZE_NUM 10
//int arr[MAX_SIZE_NUM];
//
//// 1 3 5 7 9 2 4 6 8 10
//
//int insertion_sort(void){
//
//    for (int i = 1; i <= MAX_SIZE_NUM - 1; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//                j--;
//        }
//        arr[j + 1] = key;
//
//    }
//    return 0;
//}
//
//int main(void) {
//    printf("숫자 10개를 입려해주세요 : ");
//    for (int i = 0; i <= MAX_SIZE_NUM - 1; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    insertion_sort();
//
//    for (int i = 0; i <= MAX_SIZE_NUM - 1; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}



















// ✨ 안보고 코딩 ✨
//#include <stdio.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//void insertion_sort(void) {
//    for (int i = 1; i < MAX_SIZE; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//int main(void) {
//    for (int i = 0; i < MAX_SIZE; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    insertion_sort();
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
//void insertion_sort(void) {
//    for (int i = 1; i < MAX_SIZE; i++) {
//        int key = arr[i];
//        int j = i -1;
//        while (j >= 0 && arr[j] >= key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//int main(void) {
//    for (int i = 0; i < MAX_SIZE; i++) {
//        scanf("%d", &arr[i]);
//    }
//    
//    insertion_sort();
//    
//    for (int i = 0; i < MAX_SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    
//    return 0;
//}


// ✨ 안보고 코딩 ✨
//#include <stdio.h>
//#define MAX_SIZE 10
//int arr[MAX_SIZE];
//
//void insertion_sort(void) {
//
//}
//
//int main(void) {
//    for (int i = 0; i < MAX_SIZE; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    insertion_sort();
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
//void insertion_sort(void) {
//    for (int i = 1; i < MAX_SIZE; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] >= key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//int main(void) {
//    for (int i = 0; i < MAX_SIZE; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    insertion_sort();
//
//    for (int i = 0; i < MAX_SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

// O(n) O(n^2) O(n^2)
