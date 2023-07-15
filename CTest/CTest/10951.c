
#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    
    while (1) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}

