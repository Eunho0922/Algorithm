#include <stdio.h>

int main(void) {

  int arr[31] = { 0, };
  int a;

  for(int i = 0; i < 28; i++) {
    scanf("%d", &a);
    arr[a - 1] = 1;
  }

  for(int i = 0; i < 30; i++) {
    if(!arr[i]) printf("%d \n", i + 1);
  }

  return 0;
}
