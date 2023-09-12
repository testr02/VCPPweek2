// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <conio.h>
#include <iostream>
using namespace std;
int main(){
    char ch;
    char ch2;
    printf("\"남겨진... 고독한... VC++\"\n");
    while (1) {
        printf("command>");
        ch = _getche();
        while (1) {
            if (ch == 27) {
                return 0;
            }
            ch2 = _getche();
            if (ch2 == 13) {
                printf("\n");
                if (ch == 113) {
                    printf("qwer 화이팅");
                }
                else if (ch == 119) {
                    printf("과제 너무 좋다");
                }
                else if (ch == 101) {
                    printf("담주부턴 과제량 3배다");
                }
                else if (ch == 114) {
                    printf("살려주세요");
                }
                else {
                    printf("오류입니다.");
                } printf("\n");
                break;
            }
        }
    }
}

    


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
