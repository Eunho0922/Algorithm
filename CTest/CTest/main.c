//
//  main.c
//  CTest
//
//  Created by 이은호 on 2023/04/04.
//
/*
 #include <stdio.h>
 
 int main()
 {
 int num;
 int i, result = 0;
 scanf("%d", &num);
 for(i = 1; i <= num ; i++)
 {
 result += i;
 }
 printf("%d",result);
 return 0;
 }
 
 */
/*
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 1; i <=9; i++)
    {
        printf("%d * %d = %d\n",num, i, num *i);
    }
    return 0;
}
*/
/*
 #include <stdio.h>
 
 int main()
 {
 int num, result = 0;
 for(int i = 1; i <=10; i++)
 {
 scanf("%d",&num);
 if(num % 2 ==0)
 {
 result += num;
 }
 }
 printf("%d", result);
 return 0;
 }
 */
/*
#include <stdio.h>

int main()
{
    int num, fiveresult = 0, sevenresult = 0;
    for(int i = 1; i <=10; i++)
    {
        scanf("%d",&num);
       if(num % 5 == 0)
       {
           fiveresult += 1;
       }
       else if(num % 7 == 0)
       {
           sevenresult += 1;
       }
    }
    printf("5의 배수는 %d\n", fiveresult);
    printf("7의 배수는 %d\n", sevenresult);
    return 0;
}
*/

/*

#include <stdio.h>

int main()
{
    int num, fiveresult = 0, sevenresult = 0;
    for(int i = 1; i <= 10; i++)
    {
        scanf("%d",&num);
        if(num % 5 == 0 && num % 7 == 0)
        {
            fiveresult += 1;
            sevenresult += 1;
        }
       else if(num % 5 == 0 && num % 7 != 0 )
       {
           fiveresult += 1;
       }
       else if(num % 7 == 0 && num % 5 != 0)
       {
           sevenresult += 1;
       }
    }
    printf("5의 배수는 %d\n", fiveresult);
    printf("7의 배수는 %d\n", sevenresult);
    return 0;
}

*/

/*
//4의배수의 합
#include <stdio.h>

int main()
{
    int small, big;
    int result = 0;
    
    scanf("%d %d", &small, &big);
    for(int i = small; i <= big; i++)
    {
        if(i % 4 == 0)
        {
            result += i;
        }
    }
    printf("%d", result);

    return 0;
}

*/

/*
 
 #include <stdio.h>
 
 int main()
 {
 int num;
 scanf("%d",&num);
 for(int i = 1; i <=9; i++)
 {
 printf("%d * %d = %d\n",num, i, num *i);
 }
 return 0;
 }
 */
/*
#include <stdio.h>

int main()
{
    double n1, result = 0, i = 0;
    for (; ; ) {
        scanf("%lf", &n1);
        if(n1 > 0)
        {
            result += n1 ;
            i++ ;
        }
        else{
            break;
        }
    }
    printf("%.1lf",result / i);
    return 0;
}
 */

/*
#include <stdio.h>

int main()
{
    int n1, result = 0, i = 0;
    scanf("%d", &n1);
    for (i = 1; result < n1; i++ ) {
        result += i ;
    }
    result += i;
    printf("%d %d",i, result );
    return 0;
}
 */
 
/*
#include <stdio.h>

int main()
{
    int n,a = 0, max = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &a);
        if(a > max)
        {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}
*/
/*
 #include <stdio.h>
 
 int main(void) {
 
 int i, sum;
 
 sum = 0x40302010;
 unsigned char* p = (unsigned char*)&sum;
 printf("Sum is %x\n ", sum);
 
 for (i = 0; i < 4; i++) {
 
 printf("%p\t%x\n", p + i , p[i]);
 printf("\n");
 
 }
 
 return 0;
 
 }
 */
/*
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (90 - a) / 5 + b + 1);
    return 0;
}

*/
/*
#include <stdio.h>

int main()
{
    int a;
    do
    {
        scanf("%d",&a);
        if(a % 2 == 0)
        {
            printf("%d = 짝수\n", a);
        }
        else
        {
            printf("%d = 홀수\n", a);
        }
    } while(a != 0);
 printf("종료");
 return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int a, b;
    do
    {
    printf("두수가 같을 때까지 반복하는 프로그램\n");
    scanf("%d %d",&a, &b);
    } while(a != b);
    printf("종료");
 return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a, n1 = 0, n2 = 0, result = 0, i = 1;
    scanf("%d", &a);
    n1 = (a / 10) * 10 ;
    n2 = a - n1 ;
    a = result;
    do
    {
        result = (n2 * 10) + (n1 / 10) + n2 ;
        i++ ;
        
    } while(result != a) ;
    printf("%d", i);
    return 0;
}
 */

// n = (n / 10 + n % 10) % 10 + (n % 10) * 10;
/*
 int main()
 {
 int n;
 scanf("%d
 }
 */

/*
 #include <stdio.h>
 
 int main()
 {
 int n1, i, a = 1;
 scanf("%d", &n1);
 for (i = 2; i <= n1 ; i++) {
 if(n1 % i == 0)
 {
 a++;
 }
 }
 if(a == 2)
 {
 printf("소수");
 }
 else{
 printf("ㄴ");
 }
 return 0;
 }
 */
/*
#include <stdio.h>

int main()
{
    int a = 0, result = 0, i = 0;
    while (1) {
        scanf("%d", &a);
        result += a ;
        i++ ;
        if(a==0) break;
        if(a!=0) continue;
    }
    printf("%d", result / i);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a, i = 0;
    scanf("%d",&a);
    while (i < a) {
        i++;
        if(i % 3 == 0) continue;
        printf("%d ", i);

    }
    return 0;
}
*/

/*

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n",i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
 */
/*
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
 더하기 사이클
#include <stdio.h>
int main()
{
    int n, c= 0;
    scanf("%d", &n);
    int result = n;
    do {
        n = (n / 10 + n % 10) % 10 + (n % 10) * 10;
        c++;
    } while (result != n);
    printf("%d\n", c);
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--) {
            printf("*");
        }
        for (i = 1 ; ; ) {
            <#statements#>
        }
        printf("\n");
    }
    return 0;
}

*/
/*
#include <stdio.h>

int main()
{
    int input, i, j, k;
    scanf("%d" ,&input);
    
    for (i =  1; i <= input; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i =  2; i <= input; i++) {
        for (k = input; k >= i; k--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int input, i, j, k;
    scanf("%d", &input);
    
    for (i = 1; i <= input; i++) {
        for (j = input; j >= i; j--) {
            printf("*");
        }
        printf("\n");

    }
    for (i = 2; i <= input; i++) {
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
#include <stdio.h>

int main()
{
    int input, i, j, k;
    scanf("%d", &input);
    
    for (i = 1; i <= input; i++) {
        for (j = input; j >= i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
*/

/*

#include <stdio.h>

int main()
{
    int input, i, j, k;
    scanf("%d", &input);
    
    for (i = 1; i <= input; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (k = input; k >= i ; k--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

*/
/*
 //나비 나비 나비 나비 나비 잔나비
#include <stdio.h>

int main()
{
    int input ,i, j, k, p, q;
    scanf("%d", &input);
    for (i = 1; i <= input; i++) {
    
        for (j = 1; j <= i ; j++) {
            printf("*");
        }
        for (k = input ; k > i; k--) {
            printf(" ");
        }
        for (p = input; p > i; p--) {
            printf(" ");
        }
        for (q = 1; q <= i; q++) {
            
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < input; i++) {
        for ( j = input; j > i; j--) {
            printf("*");
        }
        for (k = 1; k <= i ; k++) {
            printf(" ");
        }
        for (p = 1; p <= i; p++) {
            printf(" ");
        }
        
        for (q = input; q > i; q--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}
*/
/*
#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    if(input > 5)
    {
        if(input % 3 == 0 && input % 5 != 0)
        {
            printf("%d", input / 3);
        }
        else if (input % 5 == 0)
        {
            printf("%d", input / 5);
        }
    }
    else if(input == 3)
    {
        printf("%d", input / 3);
    }
    else
    {
        printf("-1");
    }
    
}
*/
/*
 //망할 설탕 배달
#include <stdio.h>

int main()
{
    int input, count = 0;
        scanf("%d", &input);
        
        while (1) {
            if (input % 5 == 0) {
                count += input / 5;
                break;
            }
            input -= 3;
            count++;
            if (input <= 0) break;
        }
        if (input < 0) printf("-1\n");
        else printf("%d\n", count);
}
*/
 // 별찍기 사각X
/*
#include <stdio.h>

int main()
{
    int input, a, b, c , d ;
    scanf("%d", &input);
    
    if(input % 2 != 0) // 홀수 입력 받았을 때
    {
        for (a = 1; a <= input; a++) { // 첫 번째 줄 출력
            printf("*");
        }
        printf("\n"); // 두 번째 줄로 넘어가기
        for (a = 1; a <= input - 2; a++) { // 두 번째 줄부터 마지막 전 줄까지 input - (첫 줄 + 마지막 줄) = input - 2
            printf("*"); // 세로줄 첫 번째 별 출력
            for (b = 2; b <= a ; b++) { // 오른쪽 아래 대각선 줄 별 출력 첫 번째는 붙여서 출력하기 때문에 b = 2로 써서 다음번 부터 띄어쓰기 하도록 함
                printf(" ");
            }
            printf("*"); // 띄어쓰기 다음으로 출력하는 별
            for (c = input - 3 ; c >= a ; c--) { // 오른쪽 세로줄 까지 띄어쓰기 하는 프로그램 이것을 대각선 띄어쓰기와 합쳐야함
                printf(" ");
            }
            printf("*"); //오른쪽 세로줄 별 출력
            printf("\n"); // 가로줄을 한칸 내림
            
        }
        for (a = 1; a <= input; a++) { // 마지막 줄 출력
            printf("*");
        }
        printf("\n"); // 마지막줄 한칸 내림
    }
    else // 짝수 입력 받았을 때
    {
        
    }
}
 */

/*

#include <stdio.h> // 전처리기(컴파일(빌드) 이전에 처리한다.)
int sum(int x, int y);

int main()
{
    int a = 0, b = 0, z = 0;
    scanf("%d %d", &a, &b);
    z = sum(a, b);
    printf("두 수의 합  %d\n" , z);
    return 0;
}

int sum(int x, int y) {
    int total = 0;
    total = x + y;
    return total;
}

*/
/*
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a % 2 == 0)
    {
        printf("even\n");
        if(a > 0)
        {
            printf("plus");
        }
        else
        {
            printf("minus");
        }
    }
    else
    {
        printf("odd\n");
        if(a > 0)
        {
            printf("plus");
        }
        else
        {
            printf("minus");
        }
    }
    return 0;
}
*/
// for문 심화 2번
/*
#include <stdio.h>

int main()
{
    int input, count = 0, number, i;
    scanf("%d", &input);
        for (i = 1; i <= input; i++) {
            scanf("%d", &number);
            
            count++;
            if(count == 1)
            {
                printf("%d ", number);
            }
            else if (count == (input) / 2)
            {
                printf("%d ", number);
            }
            else if (count == input)
            {
                printf("%d ", number);
                break;
            }
        }
    return 0;
}
*/
//별찍기 7번
/*
 #include <stdio.h>
 
 int main()
 {
 int input;
 scanf("%d", &input);
 for (int a = 1; a <= input; a++) {
 for (int i = input; i > a; i--) {
 printf(" ");
 }
 for (int b = 1; b <= a ; b++) {
 printf("*");
 }
 printf("\n");
 }
 return 0;
 }
 */

//별찍기 8번
/*
#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    for (int n1 = 1; n1 <= input; n1++) {
        for (int i = input; i >= n1; i--) {
            printf("*");
        }
        printf("\n");
        for (int j = 1 ;j <= n1; j++) {
            printf(" ");
        }
    }
    return 0;
}
*/

//별찍기 9번
/*
#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j-- ) {
            printf(" ");
        }
        for (k = 1; k <= (i * 2) - 1  ; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
 // 10
#include <stdio.h>

int main()
{
    int n, i, j, k, p;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        for (j = n; j >= i ; j--) {
            printf("*");
        }
        for (p = n - 1; p >= i; p--) {
            printf("*");
        }
        printf("\n");
    }
    
}
*/

/*

#include <stdio.h>

int main()
{
    int input, i, j, k;
    scanf("%d", &input);
    for (i = 1; i <= input; i++) {
        for (j = input; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= input; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
 // 나비
#include <stdio.h>

int main()
{
    int input ,i, j, k, p, q;
    scanf("%d", &input);
    for (i = 1; i <= input; i++) {
    
        for (j = 1; j <= i ; j++) {
            printf("*");
        }
        for (k = input ; k > i; k--) {
            printf(" ");
        }
        for (p = input; p > i; p--) {
            printf(" ");
        }
        for (q = 1; q <= i; q++) {
            
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < input; i++) {
        for ( j = input; j > i; j--) {
            printf("*");
        }
        for (k = 1; k <= i ; k++) {
            printf(" ");
        }
        for (p = 1; p <= i; p++) {
            printf(" ");
        }
        
        for (q = input; q > i; q--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}
*/
/*
 // 11번
#include <stdio.h>

int main()
    {
        int input;
        scanf("%d", &input);
        for (int a = 1; a <= input; a++) {
            for (int i = input; i > a; i--) {
                printf(" ");
            }
            for (int b = 1; b <= a ; b++) {
                printf("*");
            }
            printf("\n");
        }
     for (int n1 = 2; n1 <= input; n1++) {
         for (int j = 2 ;j <= n1; j++) {
             printf(" ");
         }

        for (int i = input; i >= n1; i--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
 // 12번
#include <stdio.h>

int main()
{
    int n, i, j, k, p;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j-- ) {
            printf(" ");
        }
        for (k = 1; k <= (i * 2) - 1  ; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        for (j = n; j >= i ; j--) {
            printf("*");
        }
        for (p = n - 1; p >= i; p--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/
/*
 // 13번
#include <stdio.h>

int main()
{
    int n, i, j, k, p;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        for (j = n; j >= i ; j--) {
            printf("*");
        }
        for (p = n - 1; p >= i; p--) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = n; j > i; j-- ) {
            printf(" ");
        }
        for (k = 1; k <= (i * 2) - 1  ; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*/


/*
#include <stdio.h>

int main()
{
    int nArr[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &nArr[i]);
    }
    //nArr[0] = 10, nArr[1] = 20, nArr[2] = 30, nArr[3] = 40, nArr[4] = 50;
    
    for (i = 0; i < 5; i++) {
        printf("nArr[%d] = %d\n", i, nArr[i]);
    }
    return 0;
}
*/

/*

#include <stdio.h>

int main()
{
    int hour, minute, plusMinute;
    scanf("%d %d %d", &hour, &minute, &plusMinute);
    if(hour == 0)
    {
        if((minute + plusMinute) < 60)
        {
            printf("%d %d", hour, minute + plusMinute);
        }
        else
        {
            printf("%d %d", hour + (minute + plusMinute) / 60, (minute + plusMinute) % 60);
        }
    }
    else
    {
        if((minute + plusMinute) < 60)
        {
            printf("%d %d", hour, minute + plusMinute);
        }
        else
        {
            printf("%d %d", hour + (minute + plusMinute) / 60, (minute + plusMinute) % 60);
        }
    }
    return 0;
}

*/

/*

#include <stdio.h>

int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    
    if(minute >= 45)
    {
        printf("%d %d", hour, minute - 45);
    }
    
    else if(hour == 0)
    {
        printf("%d %d", hour + 23, 60 - (45 - minute));
    }
    
    else
    {
        printf("%d %d", hour - 1, 60 - (45 - minute));
    }
    return 0;
}

*/
/*
#include <stdio.h>

int main()
{
    int n1, n2, n3, n22, i, count = 0;
    scanf("%d %d %d", &n1, &n2, &n3);
    n22 = n2;
    if(n2 > n3)
    {
        printf("-1");
        return 0;
    }
    
    for(i = 0; i < (n1 + n2);)
    {
        n2 += n22;
        i += n3;
        count++;
        
    }
    
    printf("%d", count);
    
    return 0;
}

*/
/*
#include <stdio.h>

int main()
{
    int _subject, numberOf, result = 0, number = 0;
    scanf("%d", &_subject);
    for (int i = 0; i < _subject; i++) {
        scanf("%d",&numberOf);
        for (int j = 0; j < numberOf; j++) {
            scanf("%d", &number);
            result += number;
        }
        
        printf("%.3lf\n", (double)result / numberOf);
    }ㅂ
    return 0;
}
*/
/*
 //1번
#include <stdio.h>

int main()
{
    int arr[5];
    int i = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

//2번
/*
#include <stdio.h>

int main()
{
    char arr[5];
    int i = 0;
    for (i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}
*/

/*
//3번
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int cnt = 0; // 이름의 길이를 세는 변수
    char sName[100], sNum[10]; // 이름과 학번을 문자열로 저장하는 배열
    printf("이름을 영어로 입력하세요 : ");
    scanf("%s", sName); // 이름을 문자열로 입력받기
    printf("학번을 입력하세요 : ");
    scanf("%s", sNum);

    while (sName[cnt] != '\0')
    {
        cnt++;
    }
    printf("당신의 이름은 %s(%d글자)이고 학번은 %s",sName, cnt, sNum );
    
    return 0;
}
*/
/*
//5번
#include<stdio.h>
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++) {
        num[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
*/
/*
// 1번
#include <stdio.h>

int main()
{
    int arr[10];
    int add = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        add += arr[i];
    }
    printf("%d\n", add);
    printf("%d", add / 10);

}
 */
/*
// 2번
#include <stdio.h>

int main()
{
    int arr[100];
    int i = 0;
    while (1) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        {
            break;
        }
        i++;
    }
    for (int j = i - 1; j > 0; j--) {
        printf("%d ", arr[j]);
    }
    
}
*/
/*
 //5번
#include <stdio.h>

int main()
{
    int i, arr[10], max = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int i = 0, arr[100], min = 10000, max = -10000;
    while (1) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        {
            break;
        }
        if(arr[i] % 2 == 0)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        else
        {
            if(min >= arr[i])
            {
                min = arr[i];
            }
        }
        i++;
    }
    printf("짝수 max : %d, 홀수 min : %d\n",max, min);
}
*/

//6번
/*
#include <stdio.h>

int main()
{
    int arr[5], i = 0, j = 0, min = 0;
    do
    {
        scanf("%d", &arr[i]);
        i++;
    }while(i < 5);
    for (i = 0; i <= 3; i++) {
        for (j = i + 1; j <= 4; j++) {
            if(arr[i] > arr[j])
            {
                arr[i] = arr[j];
            }
        }
    }
    printf("%d", arr);
}
*/

//#include <stdio.h>
//
//int main()
//{
//    char c;
//    int arr[130] = { 0 };
//    char alph;
//    while (1) {
//        scanf(" %c", &c);
//        if(c < 97 || c > 122)
//        {
//            break;
//        }
//        arr[c]++;
//    }
//
//    for (int i = 97; i < 122; i++) {
//        if(arr[i] != 0)
//        {
//            printf("%c : %d\n",i, arr[i]);
//        }
//    }
//
//
//}

/*
#include <stdio.h>

int main()
{
    int arr[10] = { 0 };
    int num;
    while (1) {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        arr[num % 10]++;
    }
    
    for (int i = 0; i < 10; i++) {
        if(arr[i] != 0)
        {
            printf("일의 자리 숫자 %d : %d\n", i, arr[i]);
        }
    }
    
}
*/
/*
#include <stdio.h>

int main()
{
    int arr[10] = { 0 };
    int num;
    while (1) {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        arr[num / 10]++;
    }
    
    for (int i = 0; i < 10; i++) {
        if(arr[i] != 0)
        {
            printf("십의 자리 숫자 %d : %d\n", i, arr[i]);
        }
    }
}
*/
/*
#include <stdio.h>

int main()
{
    int arr[50], i = 2;
    arr[0] = 50;
    scanf("%d", &arr[1]);
    while (1) {
        arr[i] =  arr[i - 2] - arr[i - 1];
        if(arr[i] < 0)
        {
            i++;
            break;
        }
        i++;
    }
    for (int j = 0 ; j < i ; j++) {
        printf("%d ", arr[j]);
    }
}
*/

//#include <stdio.h>
//
//int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    printf("%p\n", arr);
//    printf("%p\n", arr + 1);
//    printf("%p\n", arr + 2);
//    printf("%p\n", arr + 3);
//    printf("%p\n", arr + 4);
//    printf("%p\n", arr + 5);
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int i, j;
//    int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//    printf("size : %d\n", sizeof(arr));
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%d\t", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i, j;
//    int arr[3][4] = {
//        { 1, 2, 3, 4},
//        { 5, 6, 7, 8},
//        { 9, 10, 11, 12}
//    };
//    printf("arr size: %d\n", sizeof(arr));
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%d\t", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[3][3] = {0};
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf("%d\t", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int arr[8][9] = {0};
//
//    for (int i = 0; i < 8; i++) {
//        for (int j = 0; j < 9; j++) {
//            arr[i][j] = (i+2) * (j+1);
//        }
//    }
//
//    for (int i = 0; i < 8; i++) {
//        for (int j = 0; j < 9; j++) {
//            printf("%d\t", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int arr[5][5] = {
//        {1,2,3,4,5},
//        {6,7,8,9},
//        {10,11,12},
//        {13,14},
//        {15}
//    };
//    for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++) {
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//        }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[3][3] = { 0 };
//    int cnt = 1;
//    for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                arr[i][j] = cnt;
//                cnt++;
//            }
//        }
//    for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//        }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int num, i = 0, save = 0;
//    scanf("%d", &num);
//    int arr[num];
//    for ( i = 0; i < num; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    for ( i = 0; i < num; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    for (int j = 0; j < num - 1; j++) {
//        save = arr[j];
//        for ( i = 0; i < num; i++) {
//            arr[i] = arr[i + 1];
//            printf("%d ", arr[i]);
//        }
//        arr[num - 1] = save;
//        printf("\n");
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int i, j, arr[5][4], avarage = 0;
//
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < 4; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < 4; j++) {
//            avarage += arr[i][j];
//        }
//        avarage /= 4;
//        if (avarage >= 80) {
//            arr[i][0] = 1;
//        } else {
//            arr[i][0] = 0;
//        }
//        avarage = 0;
//    }
//
//    for (int j = 0; j < 5; j++) {
//        if(arr[j][0] == 1)
//        {
//            printf("잘함 \n");
//        }
//        else{
//            printf("파이팅 \n");
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int arr[3][4] = {0}, num[3][4] = {0}, i, j;
//    for (i = 0; i < 3; i++) {
//           for (j = 0; j < 4; j++) {
//               scanf("%d", &arr[i][j]);
//           }
//       }
//    printf("2\n");
//    for (i = 0; i < 3; i++) {
//           for (j = 0; j < 4; j++) {
//               scanf("%d", &num[i][j]);
//           }
//       }
//
//    for (i = 0; i < 3; i++) {
//           for (j = 0; j < 4; j++) {
//               printf("%d\t", (arr[i][j]) * (num[i][j]));
//           }
//        printf("\n");
//       }
//
//}


//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    char arr[4][4];
//    for (i = 0; i < 4; i++) {
//               for (j = 0; j < 4; j++) {
//                   scanf(" %c", &arr[i][j]);
//               }
//           }
//
//    for (i = 0; i < 4; i++) {
//               for (j = 0; j < 4; j++) {
//                   printf("%c\t", arr[i][j] + 32);
//               }
//        printf("\n");
//           }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int arr[3][3], i ,j;
//    for (i = 0; i < 3; i++) {
//                  for (j = 0; j < 3; j++) {
//                      scanf("%d", &arr[i][j]);
//                  }
//              }
//
//    for (i = 0; i < 3; i++) {
//                   for (j = 0; j < 3; j++) {
//                       if(arr[i][j == 1])
//                       {
//                           printf("%d\t", arr[i][j]);
//                       }
//                       else {
//                            printf("%d\t", arr[i][j] + 1);
//                       }
//                   }
//            printf("\n");
//               }
//
//}

//#include <stdio.h>
//
// 배열 심화 1번 푸는중
//int main()
//{
//    char arr[1000];
//    int i = 0;
//    while (1) {
//        scanf(" %c", &arr[i]);
//        if(arr[i] == 'EOF'){
//            break;
//        }
//        arr[i] += 32;
//        i++;
//    }
//    for (int j = 0; j <= i; j++) {
//        printf("%c", arr[j]);
//    }
//}

//#include <stdio.h>
//
//void line(){
//    printf("===========\n");
//}
//
//int main()
//{
//    line();
//    printf("함수 호출 연습\n");
//    line();
//}


//#include <stdio.h>
//
//void star1()
//{
//    printf("  *\n");
//}
//
//void star2()
//{
//    printf(" ***\n");
//}
//
//void star3()
//{
//    printf("*****\n");
//}
//
//int main()
//{
//    star1();
//    star2();
//    star3();
//    star1();
//    star3();
//    star2();
//    star1();
//}


//#include <stdio.h>
//
//void string() {
//    printf("나를 호출했니?\n");
//}
//
//int main()
//{
//    int num;
//    printf("호출할 횟수를 입력하세요 : ");
//    scanf("%d", &num);
//    for (int n = 0; n < num; n++) {
//        string();
//    }
//}

//#include <stdio.h>
//
//void printStar(int cnt)
//{
//    for (int i = 1; i <= cnt; i++) {
//        printf("  *  \n");
//        printf(" *** \n");
//        printf("*****\n");
//    }
//}
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    printStar(num);
//    return 0;
//}

//#include <stdio.h>
//
//int add(int n1, int n2)
//{
//    int n3 = n1 + n2;
//    return n3;
//}
//
//void scanAndPrint() {
//    int a, b, sum;
//    printf("정수 두 개를 입력하세요 : ");
//    scanf("%d %d", &a, &b);
//    sum = add(a, b);
//    printf("%d + %d = %d\n", a, b, sum);
//}
//
//int main() {
//
//    scanAndPrint();
//    return 0;
//}

//#include <stdio.h>
//int GetMax(int, int, int);
//
//int main()
//{
//    int nResult = 0;
//    int x, y, z;
//    printf("세 개의 정수 입력 : ");
//    scanf("%d %d %d", &x, &y, &z);
//
//    printf("Max : %d\n", GetMax(x, y, z));
//
//    printf("Max : %d\n", GetMax(x, y, z) * 2);
//
//    printf("MAx : %d\n", nResult = GetMax(x, y, z));
//
//    return 0;
//}
//
//
//int GetMax(int a, int b, int c)
//{
//    int nMax = a;
//    if(b > nMax) nMax = b;
//    if(c > nMax) nMax = c;
//
//    return nMax;
//}

//#include <stdio.h>
//
//int add(int num1, int num2);
//void ShowResult(int num);
//int scanNum();
//void HowToUseThisProg();
//
//int main()
//{
//    int result, num1, num2;
//
//    HowToUseThisProg();
//    num1 = scanNum();
//    num2 = scanNum();
//    result = add(num1, num2);
//    ShowResult(result);
//    return 0;
//}
//
//int add(int num1, int num2)
//{
//    return num1 + num2;
//}
//
//void ShowResult(int num)
//{
//    printf("덧셈결과 출력 : %d\n", num);
//}
//
//int scanNum()
//{
//    int num;
//    scanf("%d", &num);
//    return num;
//}
//
//void HowToUseThisProg()
//{
//    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
//    printf("자! 그럼 두개의 정수를 입력하세요.\n");
//
//}

//#include <stdio.h>
//
//int main(){
//    char arr[1000];
//    int i = 0;
//
//    scanf("%s", &arr[i]);
//
//    while(1) {
//        if(arr[i] == '\0') break;
//        if(arr[i] >= 65 && arr[i] <= 90) arr[i] += 32;
//        else if (arr[i] >= 97 && arr[i] <= 122) arr[i] -= 32;
//        i++;
//    }
//
//    for (int j = 0; j < i; j++) {
//        printf("%c", arr[j]);
//    }
//
//}

//#include <stdio.h>
//
//int NumCompare(int num1, int num2);
//int main()
//{
//    int n1, n2;
//    while (1) {
//        printf("두 정수 입력 : ");
//        scanf("%d %d", &n1, &n2);
//        if(n1 == 0 || n2 == 0) break;
//        printf("%d과 %d중에 큰 수는 %d이다\n", n1, n2, NumCompare(n1, n2));
//    }
//    return 0;
//}
//int NumCompare(int num1, int num2)
//{
//    if (num1 > num2)
//        return num1;
//    else
//        return num2;
//}


#include <stdio.h>

int compare(int num1, int num2);
int absvalue(int num);

int main()
{
    int num1, num2;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d 중 절대값이 큰 정수 : %d\n", num1, num2, compare(num1, num2));
    return 0;
}

int compare(int n1, int n2)
{
    if(absvalue(n1) > absvalue(n2))
        return n1;
    else
        return n2;
}

int absvalue(int num)
{
    if(num < 0)
    {
        num *= -1;
        return num;
    }
    else
    {
        return num;
    }
}


