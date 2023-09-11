//#include <stdio.h>
//
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    int arr[100];
//    int least = 0;
//    int tmp = 0;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i = 0; i < n - 1; i++) {
//        int min = arr[i];
//        least = i;
//        for (int j = i; j < n; j++) {
//            if (arr[j] < min) {
//                min = arr[j];
//                least = j;
//            }
//        }
//        tmp = arr[i];
//        arr[i] = arr[least];
//        arr[least] = tmp;
//    }
//
//    for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
//}
//
