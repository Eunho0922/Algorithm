//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks {
//    char stack[MAX_STACK_SIZE];
//    int top;
//};
//
//void init_stack(struct stacks* s) {
//    s->top = -1;
//}
//
//int is_empty(struct stacks *s)
//{
//    return (s->top == -1);
//}
//
//int is_full(struct stacks *s)
//{
//    return (s->top == MAX_STACK_SIZE - 1);
//}
//
//void push(struct stacks *s, char c)
//{
//    if (is_full(s)) {
//        printf("Stack is full.\n");
//        return;
//    }
//    
//    s->stack[++(s->top)] = c;
//}
//
//char pop(struct stacks *s)
//{
//    if (is_empty(s)) {
//        printf("Stack is empty.\n");
//        return '\0';
//    }
//    
//    return s->stack[(s->top)--];
//}
//
//char peek(struct stacks* s) {
//    if (!is_empty(s))
//        return s->stack[s->top];
//    
//    printf("Stack is empty.\n");
//    return '\0';
//}
//
//int rank(char c) {
//    switch(c){
//        case '(':
//        case ')':
//            return 0;
//        case '+':
//        case '-':
//            return 1;
//        case '*':
//        case '/':
//            return 2;
//    }
//    
//    return -1;
//}
//
//
//void infix_to_postfix(char* expr) {
//    struct stacks st;
//    init_stack(&st);
//    
//    for(int i = 0; i < strlen(expr); i++) {
//        char ch = expr[i];
//        
//        switch(ch){
//            case '+':
//            case '-':
//            case '*':
//            case '/':
//                while(!is_empty(&st) && rank(peek(&st)) >= rank(ch)) {
//                    printf("%c", pop(&st));
//                }
//                push(&st, ch);
//                break;
//                
//            case '(':
//                push(&st, ch);
//                break;
//                
//            case ')':
//                while(!is_empty(&st) && peek(&st) != '(') {
//                    printf("%c", pop(&st));
//                }
//                pop(&st);
//                break;
//                
//            default:
//                printf("%c", ch);
//                break;
//        }
//    }
//    
//    while(!is_empty(&st)) {
//        printf("%c", pop(&st));
//    }
//    
//}
//
//
//int main(void) {
//    char* s = "(2+3)*4+9";
//    printf("Infix notation: %s\n", s);
//    printf("Postfix notation: ");
//    infix_to_postfix(s);
//    return 0;
//}


#include <stdio.h>
#include <stdlib.h> // rand(), srand() 함수를 사용하기 위해서 rand(), srand() 함수를 포함하고 있는 헤더파일을 추가해준 것
#include <time.h> // time() 함수를 사용하기 위해서 time() 함수를 포함하고 있는 헤더파일을 추가해준 것
int game_chance = 3; // 게임 기회를 나타내는 전역변수
int total_score; // 게임의 전체 점수를 자동으로 0으로 초기화 되는 전역변수
int save_input[100] = {0, }; // 입력 받은 것을 저장하는 배열
int inps = 0; // 배열에 몇번째를 나타내는 전역변수
int count;
int random_number(void); // 초마다 랜덤으로 숫자를 뽑아내는 함수
void input(void); // 입력받는 함수
void output(int output_num); // 이겼다, 졌다, 비겼다 출력해주는 함수
void comp(int comp_num); // 이겼는지, 졌는지, 비겼는지 비교하는 함수
void game_end(void); // 게임 종료 문구 출력하는 함수
void start_text (void); // 가위바위보 게임 아이콘 및 게임 설명 출력해주는 함수
void icon_0(void); // 주먹 아이콘 출력 함수
void icon_1(void); // 가위 아이콘 출력 함수
void icon_2(void); // 보자기 아이콘 출력 함수
int main(void) // 은호담당
{
    start_text();
    input();
    return 0;
}
void input(void) // 은성담당
{
    while(1){
        if(game_chance <= 0) {game_end();} // 기회가 0이하이면 끝
        if(game_chance >= 3) {game_chance = 3;} // 기회는 3까지만
        printf("게임 기회 : %d\n", game_chance);
        printf("total point : %d\n", total_score);
        printf("✌️ 가위(1번)\n✊ 바위(2번)\n✋ 보(3번)\n번호를 선택해주세요! : ");
        
        int result = scanf("%d", &save_input[inps]);  // 3300 ~ 3306줄 공부하기
        
        if (result == 0 || result == EOF) {
            printf("\n🔥다른 수를 입력해주세요.🔥\n\n");
            fflush(stdin);
            continue;
        }
        
        switch (save_input[inps]) {
            case 1:
                printf("🐥 사용자가 낸 것 ⬇️\n");
                icon_1();
                break;
            case 2:
                printf("🐥 사용자가 낸 것 ⬇️\n");
                icon_0();
                break;
            case 3:
                printf("🐥 사용자가 낸 것 ⬇️\n");
                icon_2();
                break;
            default:
                break;
        }
        
        if (save_input[inps] == 1 || save_input[inps] == 2 || save_input[inps] == 3 ) { // 1번 이면 0을 comp한테 보내주는 것, 2번 이면 1을 comp한테 보내주는 것, 3번 이면 2를 comp한테 보내주는 것
            comp(save_input[inps]-1);
            break;
        }
        else {
            printf("\n🔥다른 수를 입력해주세요.🔥\n\n"); // 오류처리 다른 숫자가 들어오면 다시 입력받도록 함
            continue;
        }
    }
}
void comp(int comp_num) { // 기준 담당
    int random = random_number();
    switch (random) {
        case 0:
            printf("💻 컴퓨터가 낸 것 ⬇️\n");
            icon_1();
            break;
        case 1:
            printf("💻 컴퓨터가 낸 것 ⬇️\n");
            icon_0();
            break;
        default:
            printf("💻 컴퓨터가 낸 것 ⬇️\n");
            icon_2();
            break;
    }
    int n1 = 0, n2 = 1, n3 = 2; // n1은 출력 코드에 비겼을 때를 보내주는 용도, n2는 이겼을 때, n3는 졌을 때
    switch(comp_num) {
        case 0: // 입력 받은 것이 가위일때
            if(comp_num==random) { total_score += 1; output(n1); input();} // 랜덤 숫자와 같으면 비긴 것이기 총점수에 1을 더하고 출력 코드에 n1(0의 값을 보낸다 = 비겼을때의 값)을 보내서 비겼음을 출력하고 다시 입력 받는 것 호출
            else if(random==2) { total_score += 3; output(n2); input(); } // 랜덤이 2이면 보자기 이기때문에 사용자가 가위를 내서 이긴것으로 총점수에 3점 더하고 n2(이겼을 때의 값)를 보내 출력하고 다시 입력 받기 호출
            else { total_score += 0; game_chance--; output(n3); input();} // 그게 아니면 졌이니 총점수에 0점을 더하고 기회에서 1을 뺀다 n3(졌을 때 값)를 output으로 보내서 출력하고 다시 입력 받기 호출
            break;
        case 1: // 입력 받은 것이 바위일때
            if(comp_num==random) { total_score += 1; output(n1); input();} // 랜덤 숫자와 같으면 비긴 것이기 총점수에 1을 더하고 출력 코드에 n1(0의 값을 보낸다 = 비겼을때의 값)을 보내서 비겼음을 출력하고 다시 입력 받는 것 호출
            else if(random==0) { total_score += 3; output(n2); input(); } // 랜덤이 0이면 가위 이기때문에 사용자가 주먹을 내서 이긴것으로 총점수에 3점 더하고 n2(이겼을 때의 값)를 보내 출력하고 다시 입력 받기 호출
            else { total_score += 0; game_chance--; output(n3); input();} // 그게 아니면 졌이니 총점수에 0점을 더하고 기회에서 1을 뺀다 n3(졌을 때 값)를 output으로 보내서 출력하고 다시 입력 받기 호출
            break;
        case 2: // 입력 받은 것이 보일때
            if(comp_num==random) { total_score += 1; output(n1); input();} // 랜덤 숫자와 같으면 비긴 것이기 총점수에 1을 더하고 출력 코드에 n1(0의 값을 보낸다 = 비겼을때의 값)을 보내서 비겼음을 출력하고 다시 입력 받는 것 호출
            else if(random==1) { total_score += 3; output(n2); input(); } // 랜덤이 1이면 주먹 이기때문에 사용자가 보자기를 내서 이긴것으로 총점수에 3점 더하고 n2(이겼을 때의 값)를 보내 출력하고 다시 입력 받기 호출
            else {total_score += 0; game_chance--; output(n3); input();} // 그게 아니면 졌이니 총점수에 0점을 더하고 기회에서 1을 뺀다 n3(졌을 때 값)를 output으로 보내서 출력하고 다시 입력 받기 호출
            break;
    }
}
void output(int output_num) { // 다영 담당
    if (output_num == 0) { printf("🥈 비겼습니다!\n\n"); }
    else if (output_num == 1) {printf("🥇 이겼습니다!\n\n");}
    else { printf("🥉 졌습니다!\n\n"); }
    return;
}
void game_end(void) { // 은호 담당
    printf("🔥 게임이 종료 되었습니다! 🔥\n🏆 Total Score(총 점수) : %d\n\n🙏 저희 게임을 즐겨주셔서 감사합니다!\nTeam 묵찌빠 : 이은호, 임다영, 육기준, 이은성\n\n", total_score);
    exit(0); // 프로그램을 종료하는 코드임. 사용한 이유는 함수가 void라 반환값이 없는데 이 함수에서 프로그램을 종료해야 하기 때문이다
}
int random_number(void) // 은호 담당
{
    srand((unsigned int)time(NULL)); // 랜덤함수로 음수값이 아닌 정수형으로 초마다 값을 바꾸게 해주는 코드
    return rand() % 3; // 0 ~ 2 사이에 랜덤수를 뽑아내서 반환하는 코드. 컴퓨터가 무엇을 낼지 랜덤으로 뽑아내는 코드임
}
 
void start_text (void) { // 다영담당
   printf("\n\n");
   printf("              ##      #####    ##             ##      #####    ##     ##     ##      \n");
   printf("     ######   ##     ##   ##   ##   ##    ##  ##     ##   ##   ##     #########      \n");
   printf("         ##   ##      #####    ##   ########  ##      #####    ##     ##     ##      \n");
   printf("         ##   ####  #############   ##    ##  ####  #############     #########      \n");
   printf("        ##    ##         ##    ##   ########  ##         ##    ##         ##         \n");
   printf("              ##        ##     ##             ##        ##     ##  ################  \n\n");
   printf("규칙설명\n - 총 기회는 5번이고 졌을때만 기회가 줄어듭니다.\n - 이기면 3점, 비기면 1점, 지면 0점입니다!\n\n");
}
void icon_0(void) // 다영담당
{
   printf("         _@@__@@__@@_@@@__               \n");
   printf("      @@@                @@              \n");
   printf("     @@     @   @    @     @             \n");
   printf("     @@ @   @    @    @_@@@@*_           \n");
   printf("     @@ @@_ _@  _@@_ @@      @           \n");
   printf("     @@  @@@@ @@@* @@@**@@@@@*           \n");
   printf("      @        &*  **       @            \n");
   printf("       @      ***         @@             \n");
   printf("        @@      *       @@               \n");
   printf("         @             @                 \n\n");
}
void icon_1(void) // 다영담당
{
   printf("               @@@        @@@              \n");
   printf("              @   @@     @   @             \n");
   printf("              @   @@    @@  @              \n");
   printf("              @   @@   @@   @              \n");
   printf("               @   @___@   @               \n");
   printf("            __@@  __@@  __@@@_             \n");
   printf("          @@   @%%         @   @            \n");
   printf("         @@  @  @      @@      @           \n");
   printf("         @    @@#       @_@   @            \n");
   printf("          @             %%  @ @              \n");
   printf("           @               @@              \n\n");
}
void icon_2(void) // 다영담당
{
   printf("            _@@    @@@   _                 \n");
   printf("           @  @   @  @  @ @                \n");
   printf("       @@  @   @  @   @    @               \n");
   printf("      @  @ @   @  @   @   @                \n");
   printf("      @  @ @   @ @  @ /   @                \n");
   printf("      @   #@    @_   #    @  @@@           \n");
   printf("      @                   @@   _@          \n");
   printf("       @                  @    @            \n");
   printf("        @                    @@             \n");
   printf("         @                @@               \n");
   printf("          @@               @                 \n\n");
}



