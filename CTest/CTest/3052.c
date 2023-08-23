//#include <stdio.h>
//
//int main(void)
//{
//    int count = 10, count1;
//    int arr[10];
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int j = 0; j < 10; j++) {
//        arr[j] = arr[j] % 42;
//        count = arr[j];
//    }
//
//    for (int i = 0; i < 10; i++) {
//        for (int j = 1; j < 10; j++) {
//            if (arr[i] == arr[j]) { arr[i] = 0; }
//        }
//    }
//
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] == 0) { count--; }
//    }
//
//    printf("%d", count);
//    return 0;
//
//
//
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] == 0) { count--; }
//    }
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] == 0) { count--; }
//    }
//
//
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] == 0) { count--; }
//    }
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] == 0) { count--; }
//    }
//
//}


#include <stdio.h>

int score[10];
int max;

int main(void)
{
    for (int i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
    }
    max = score[0];
    for (int i = 0; i < 10; i++) {
        if (score[i] >= max) {
            max = score[i];
        }
    }
    printf("%d", max);
}
