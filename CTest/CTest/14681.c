#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    if (n1 > 0 && n2 > 0) { printf("1"); }
    else if (n1 > 0 && n2 < 0) { printf("4"); }
    else if (n1 < 0 && n2 < 0) { printf("3"); }
    else if (n1 < 0 && n2 > 0) { printf("2"); }
    return 0;
}
