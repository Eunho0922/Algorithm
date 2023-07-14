#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < 9; i++) {
        printf("%d * %d = %d\n",  num, i + 1, num * (i + 1));
    }
}
