#include <stdio.h>

int main(void)
{
    int num1;
    scanf("%d", &num1);
    for (int i = num1 / 4; i > 0; i--) {
        printf("long ");
    }
    printf("int");
    return 0;
}
