#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
#include <time.h>

int arr[MAX_SIZE];
void insertion_sort() {

}

int main(void) {
    srand(time(NULL));
    int n = MAX_SIZE;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    insertion_sort();

    for (int i = 1; i <= n-1; i--) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

