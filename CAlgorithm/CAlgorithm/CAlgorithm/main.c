//
//  main.c
//  CAlgorithm
//
//  Created by 이은호 on 2023/05/05.
//

#include <stdio.h>

int main()
{
    int n1, n2, result = 0, result1 = 0, result2 = 0, max = 0;
    scanf("%d %d", &n1, &n2);
    result = n1 * (n2 % 10);
    result1 = n1 * ((n2 % 100) / 10);
    result2 = n1 * (n2 / 100);
    max = (result2 * 100) + (result1 * 10) + (result);
    printf("%d\n", result);
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", max);
    
    return 0;
}
