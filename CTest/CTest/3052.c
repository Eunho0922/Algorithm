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


//#include <stdio.h>
//
//int main(void)
//{
//    int x, y;
//    scanf("%d %d", &x, &y);
//    int tmp = x;
//    x = y;
//    y = x;
//    printf("%d %d", x, y);
//}

//#include <stdio.h>
//
//int main(void)
//{
//    int x, y;
//    scanf("%d %d", &x, &y);
//    if (x > y) {
//        printf("%d\n", x);
//    } else {
//        printf("%d\n", y);
//    }
//}

//#include <stdio.h>
//
//
//int main(void)
//{
//    int n;
//    int result = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        result += i;
//    }
//    
//    printf("%d\n", result);
//}


// 11범 : 2개
// 12번 : recursive
//
//#include <stdio.h>
//
//int main(void)
//{
//    int input;
//    int result = 0;
//    scanf("%d", &input);
//    for (int i = 1; i <= input; i++) {
//        result += i;
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    int input;
//    int result = 0;
//    scanf("%d", &input);
//    for (int i = 1; i <= input; i++) {
//        result += (1 / i);
//    }
//    return 0;
//}

// 2
//

#include <stdio.h>

void hanoi(int n, char start, char mid, char end) {
    if (n == 0) {
        return;
    }
    
    hanoi(n-1, start, end, mid);
    printf("%c -> %c\n", start, end);
    hanoi(n-1, mid, start, end);
}

int main(void) {
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    
    return 0;
}

