#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

void easy();
void middle();
void hard();
void expert();
void moving();
void character();

int main() {


	return 0;
}
void easy() {

}

void middle() {

}

void hard() {

}

void expert() {

}

void moving() {

}

void character(characY) {
	GotoXY(0, characY);
	    static bool legFlag = 1;
	    printf("        $$$$$$$ \n");
	    printf("       $$ $$$$$$\n");
	    printf("       $$$$$$$$$\n");
	    printf("$      $$$      \n");
	    printf("$$     $$$$$$$  \n");
	    printf("$$$   $$$$$     \n");
	    printf(" $$  $$$$$$$$$$ \n");
	    printf(" $$$$$$$$$$$    \n");
	    printf("  $$$$$$$$$$    \n");
	    printf("    $$$$$$$$    \n");
	    printf("     $$$$$$     \n");
	    if (legFlag)
	    {
	        printf("     $    $$$    \n");
	        printf("     $$          ");
	        legFlag = 0;
	    }
	    else
	    {
	        printf("     $$$  $     \n");
	        printf("          $$    ");
	        legFlag = true;
	    }
}
//#include<stdio.h>
//#include<windows.h>
//#include<conio.h>
//#include<time.h>
//#include<stdlib.h> 
//#define DINO_BOTTOM_Y 12
//#define TREE_BOTTOM_Y 20
//#define TREE_BOTTOM_X 45
//#define ITEM_BOTTOM_Y 5
//#define ITEM_BOTTOM_X 45
//
////콘솔 창의 크기와 제목을 지정하는 함수
//void SetConsoleView()
//{
//	system("mode con:cols=100 lines=25");
//	system("title Google Dinosaurs.");
//}
//
////커서의 위치를 x, y로 이동하는 함수
//void GotoXY(int x, int y)
//{
//	COORD Pos;
//	Pos.X = 2 * x;
//	Pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
////키보드의 입력을 받고, 입력된 키의 값을 반환하는 함수
//int GetKeyDown()
//{
//	if (_kbhit() != 0)
//	{
//		return _getch();
//	}
//	return 0;
//}
//
//// 게임 시작 상태창
//void DrawGameStart()
//{
//	system("cls");
//	int x = 16;
//	int y = 13;
//	GotoXY(x, y);
//	printf("===========================");
//	GotoXY(x, y + 1);
//	printf("===========================");
//	GotoXY(x, y + 2);
//	printf("======rabbit run game======");
//	GotoXY(x, y + 3);
//	printf("===========================");
//	GotoXY(x, y + 4);
//	printf("===========================");
//	GotoXY(x, y + 5);
//	printf("Z : Jump");
//	GotoXY(x, y + 7);
//	printf("Your life is 5.");
//	GotoXY(x, y + 8);
//	printf("If you bump the tree, life will be --.");
//	GotoXY(x, y + 9);
//	printf("If you eat carrot, your life will be ++!");
//	GotoXY(x, y + 11);
//	printf("If you want to start, push any key.");
//	printf("\n\n\n\n\n\n\n\n");
//	getch();
//}
//
////공룡을 그리는 함수
//void DrawDino(int dinoY)
//{
//	GotoXY(0, dinoY);
//	static bool legFlag = true;
//	printf("         $$     \n");
//	printf("        $$$     \n");
//	printf("        $$$     \n");
//	printf("        $$$$$   \n");
//	printf("       $$$ $$$  \n");
//	printf("       $$$$$$   \n");
//	printf("      $$$$$     \n");
//	printf(" $$  $$$$$$$$$$$\n");
//	printf(" $$$$$$$$$$$    \n");
//	printf("  $$$$$$$$$$    \n");
//	printf("    $$$$$$$$    \n");
//	if (legFlag)
//	{
//		printf("     $    $$$    \n");
//		printf("     $$          ");
//		legFlag = false;
//	}
//	else
//	{
//		printf("     $$$  $     \n");
//		printf("          $$    ");
//		legFlag = true;
//	}
//}
//
////나무를 그리는 함수
//void DrawTree(int treeX)
//{
//	GotoXY(treeX, TREE_BOTTOM_Y);
//	printf("$$$$");
//	GotoXY(treeX, TREE_BOTTOM_Y + 1);
//	printf(" $$ ");
//	GotoXY(treeX, TREE_BOTTOM_Y + 2);
//	printf(" $$ ");
//	GotoXY(treeX, TREE_BOTTOM_Y + 3);
//	printf(" $$ ");
//	GotoXY(treeX, TREE_BOTTOM_Y + 4);
//	printf(" $$ ");
//}
//
////당근 아이템을 그리는 함수
//void DrawItem(int itemX)
//{
//	GotoXY(itemX, ITEM_BOTTOM_Y);
//	printf(" $$ ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 1);
//	printf("$$$ ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 2);
//	printf("$$  ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 3);
//	printf("$   ");
//}
//
////아이템을 먹으면 생기는 이펙트효과를 그리는 함수
//void item_effect(int itemX)
//{
//	GotoXY(itemX, ITEM_BOTTOM_Y);
//	printf("  @@      @@  ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 1);
//	printf("@     @@     @");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 2);
//	printf(" @          @ ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 4);
//	printf("  @       @   ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 5);
//	printf("    @    @    ");
//	GotoXY(itemX, ITEM_BOTTOM_Y + 6);
//	printf("      @       ");
//	Sleep(100);
//}
//
////장애물에 부딪히면 나타나는 이펙트효과를 그리는 함수
//void tree_effect(int treeX)
//{
//	GotoXY(treeX, TREE_BOTTOM_Y);
//	printf("--------------");
//	GotoXY(treeX, TREE_BOTTOM_Y + 1);
//	printf("--------------");
//	GotoXY(treeX, TREE_BOTTOM_Y + 2);
//	printf("--------------");
//	GotoXY(treeX, TREE_BOTTOM_Y + 3);
//	printf("--------------");
//	GotoXY(treeX, TREE_BOTTOM_Y + 4);
//	printf("--------------");
//	Sleep(100);
//}
//
////(v2.0) 충돌 했을때 게임오버 그려줌
//void DrawGameOver(const int score)
//{
//	system("cls");
//	int x = 18;
//	int y = 8;
//	GotoXY(x, y);
//	printf("===========================");
//	GotoXY(x, y + 1);
//	printf("======G A M E O V E R======");
//	GotoXY(x, y + 2);
//	printf("===========================");
//	GotoXY(x, y + 5);
//	printf("SCORE : %d", score);
//
//	printf("\n\n\n\n\n\n\n\n\n");
//	system("pause");
//}
//
////(v2.0) 충돌했으면 true, 아니면 false
//bool isCollision(const int treeX, const int itemX, const int dinoY, const int life)
//{
//	//나무에 부딪혀도 살 수 있는 횟수 지정  
//	//트리의 X가 공룡의 몸체쪽에 있을때,
//	//공룡의 높이가 충분하지 않다면 충돌로 처리
//	GotoXY(0, 0);
//	printf("treeX : %d, itemX : %d, dinoY : %d, life : %d", treeX, itemX, dinoY, life); //이런식으로 적절한 X, Y를 찾습니다.
//	if (treeX <= 7 && treeX >= 6 && dinoY > 8)
//	{
//		return true;
//	}
//	return false;
//}
//
////아이템(당근)먹으면 life 1씩 늘어나는 함수정의  
//bool isCollision2(const int treeX, const int itemX, const int dinoY, const int life)
//{
//	GotoXY(0, 0);
//	printf("treeX : %d, itemX : %d, dinoY : %d, life : %d", treeX, itemX, dinoY, life); //이런식으로 적절한 X, Y를 찾습니다.
//	if (itemX <= 8 && itemX >= 6 && dinoY < 4)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	SetConsoleView();
//	//게임 시작전 게임설명하는 함수코드 추가  
//	DrawGameStart();
//	while (true)		//(v2.0) 게임 루프
//	{
//		//게임 시작시 초기화
//		bool isJumping = false;
//		bool isBottom = true;
//		const int gravity = 3;
//
//		int dinoY = DINO_BOTTOM_Y;
//		int treeX = TREE_BOTTOM_X;
//		int itemX = ITEM_BOTTOM_X;
//
//		int score = 0;
//		//목숨변수 추가  
//		int life = 5;
//		clock_t start, curr;	//점수 변수 초기화
//		start = clock();		//시작시간 초기화
//
//		while (true)	//한 판에 대한 루프
//		{
//			//(v2.0) 충돌체크 트리의 x값과 공룡의 y값으로 판단
//			if (isCollision(treeX, itemX, dinoY, life)) {
//				//충돌시 life 1씩 감소  
//				life--;
//				//충돌시 이펙트 함수 호출  
//				tree_effect(treeX);
//				if (life == 0) break;
//			}
//
//			//아이템 먹으면 life 1씩 증가  
//			if (isCollision2(treeX, itemX, dinoY, life)) {
//				life++;
//				//먹으면 하트 이펙트 함수 호출  
//				item_effect(itemX);
//			}
//
//			//z키가 눌렸고, 바닥이 아닐때 점프
//			if (GetKeyDown() == 'z' && isBottom)
//			{
//				isJumping = true;
//				isBottom = false;
//			}
//
//			//점프중이라면 Y를 감소, 점프가 끝났으면 Y를 증가.
//			if (isJumping)
//			{
//				dinoY -= gravity;
//
//			}
//			else
//			{
//				dinoY += gravity;
//			}
//
//			//Y가 계속해서 증가하는걸 막기위해 바닥을 지정.
//			if (dinoY >= DINO_BOTTOM_Y)
//			{
//				dinoY = DINO_BOTTOM_Y;
//				isBottom = true;
//			}
//
//			//나무,아이템이 왼쪽으로 (x음수) 가도록하고
//			//나무,아이템의 위치가 왼쪽 끝으로가면 다시 오른쪽 끝으로 소환.
//			treeX -= 2;
//			itemX -= 1;
//
//			//일정 시간이 지난 후, 장애물 속도 증가 
//			if (score >= 5) {
//				treeX -= 1;
//			}
//
//			if (treeX <= 0)
//			{
//				treeX = TREE_BOTTOM_X;
//			}
//
//			if (itemX <= 0)
//			{
//				itemX = ITEM_BOTTOM_X;
//			}
//
//			//점프의 맨위를 찍으면 점프가 끝난 상황.
//			if (dinoY <= 4)
//			{
//				isJumping = false;
//			}
//
//			DrawDino(dinoY);		//draw dino
//			DrawTree(treeX);		//draw Tree
//			DrawItem(itemX);		//draw carrot
//
//			//(v2.0)
//			curr = clock();			//현재시간 받아오기
//			if (((curr - start) / CLOCKS_PER_SEC) >= 1)	// 1초가 넘었을??
//			{
//				score++;	//스코어 UP
//				start = clock();	//시작시간 초기화
//			}
//			Sleep(60);
//			system("cls");	//clear
//
//			//(v2.0) 점수출력을 1초마다 해주는것이 아니라 항상 출력해주면서, 1초가 지났을때 ++ 해줍니다.
//			GotoXY(22, 0);	//커서를 가운데 위쪽으로 옮긴다. 콘솔창이 cols=100이니까 2*x이므로 22정도 넣어줌
//			printf("        Score : %d ", score);	//점수 출력해줌.
//		}
//
//		//(v2.0) 게임 오버 메뉴
//		DrawGameOver(score);
//	}
//	return 0;
//}

//[C/C++ game] very simple google dinosaur. (by. BlockDMask)
//2019.12.03 (v2.0)점수 추가, 충돌처리 추가.
//#include<stdio.h>
//#include<windows.h>
//#include<conio.h>
//#include<time.h>
//#define DINO_BOTTOM_Y 12
//#define TREE_BOTTOM_Y 20
//#define TREE_BOTTOM_X 45
//
////콘솔 창의 크기와 제목을 지정하는 함수
//void SetConsoleView()
//{
//    system("mode con:cols=100 lines=25");
//    system("title Google Dinosaurs. By BlockDMask.");
//}
//
////커서의 위치를 x, y로 이동하는 함수
//void GotoXY(int x, int y)
//{
//    COORD Pos;
//    Pos.X = 2 * x;
//    Pos.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
////키보드의 입력을 받고, 입력된 키의 값을 반환하는 함수
//int GetKeyDown()
//{
//    if (_kbhit() != 0)
//    {
//        return _getch();
//    }
//    return 0;
//}
//
////공룡을 그리는 함수
//void DrawDino(int dinoY)
//{
//    GotoXY(0, dinoY);
//    static bool legFlag = true;
//    printf("        $$$$$$$ \n");
//    printf("       $$ $$$$$$\n");
//    printf("       $$$$$$$$$\n");
//    printf("$      $$$      \n");
//    printf("$$     $$$$$$$  \n");
//    printf("$$$   $$$$$     \n");
//    printf(" $$  $$$$$$$$$$ \n");
//    printf(" $$$$$$$$$$$    \n");
//    printf("  $$$$$$$$$$    \n");
//    printf("    $$$$$$$$    \n");
//    printf("     $$$$$$     \n");
//    if (legFlag)
//    {
//        printf("     $    $$$    \n");
//        printf("     $$          ");
//        legFlag = false;
//    }
//    else
//    {
//        printf("     $$$  $     \n");
//        printf("          $$    ");
//        legFlag = true;
//    }
//}
//
////나무를 그리는 함수
//void DrawTree(int treeX)
//{
//    GotoXY(treeX, TREE_BOTTOM_Y);
//    printf("$$$$");
//    GotoXY(treeX, TREE_BOTTOM_Y + 1);
//    printf(" $$ ");
//    GotoXY(treeX, TREE_BOTTOM_Y + 2);
//    printf(" $$ ");
//    GotoXY(treeX, TREE_BOTTOM_Y + 3);
//    printf(" $$ ");
//    GotoXY(treeX, TREE_BOTTOM_Y + 4);
//    printf(" $$ ");
//}
//
////(v2.0) 충돌 했을때 게임오버 그려줌
//void DrawGameOver(const int score)
//{
//    system("cls");
//    int x = 18;
//    int y = 8;
//    GotoXY(x, y);
//    printf("===========================");
//    GotoXY(x, y + 1);
//    printf("======G A M E O V E R======");
//    GotoXY(x, y + 2);
//    printf("===========================");
//    GotoXY(x, y + 5);
//    printf("SCORE : %d", score);
//
//    printf("\n\n\n\n\n\n\n\n\n");
//    system("pause");
//}
//
////(v2.0) 충돌했으면 true, 아니면 false
//bool isCollision(const int treeX, const int dinoY)
//{
//    //트리의 X가 공룡의 몸체쪽에 있을때,
//    //공룡의 높이가 충분하지 않다면 충돌로 처리
//    GotoXY(0, 0);
//    printf("treeX : %d, dinoY : %d", treeX, dinoY); //이런식으로 적절한 X, Y를 찾습니다.
//    if (treeX <= 8 && treeX >= 4 &&
//        dinoY > 8)
//    {
//        return true;
//    }
//    return false;
//}
//
//int main()
//{
//    SetConsoleView();
//
//    while (true)        //(v2.0) 게임 루프
//    {
//        //게임 시작시 초기화
//        bool isJumping = false;
//        bool isBottom = true;
//        const int gravity = 3;
//
//        int dinoY = DINO_BOTTOM_Y;
//        int treeX = TREE_BOTTOM_X;
//
//        int score = 0;
//        clock_t start, curr;    //점수 변수 초기화
//        start = clock();        //시작시간 초기화
//
//        while (true)    //한 판에 대한 루프
//        {
//            //(v2.0) 충돌체크 트리의 x값과 공룡의 y값으로 판단
//            if (isCollision(treeX, dinoY))
//                break;
//
//            //z키가 눌렸고, 바닥이 아닐때 점프
//            if (GetKeyDown() == 'z' && isBottom)
//            {
//                isJumping = true;
//                isBottom = false;
//            }
//
//            //점프중이라면 Y를 감소, 점프가 끝났으면 Y를 증가.
//            if (isJumping)
//            {
//                dinoY -= gravity;
//            }
//            else
//            {
//                dinoY += gravity;
//            }
//
//            //Y가 계속해서 증가하는걸 막기위해 바닥을 지정.
//            if (dinoY >= DINO_BOTTOM_Y)
//            {
//                dinoY = DINO_BOTTOM_Y;
//                isBottom = true;
//            }
//
//            //나무가 왼쪽으로 (x음수) 가도록하고
//            //나무의 위치가 왼쪽 끝으로가면 다시 오른쪽 끝으로 소환.
//            treeX -= 2;
//            if (treeX <= 0)
//            {
//                treeX = TREE_BOTTOM_X;
//            }
//
//            //점프의 맨위를 찍으면 점프가 끝난 상황.
//            if (dinoY <= 3)
//            {
//                isJumping = false;
//            }
//
//            DrawDino(dinoY);        //draw dino
//            DrawTree(treeX);        //draw Tree
//
//            //(v2.0)
//            curr = clock();            //현재시간 받아오기
//            if (((curr - start) / CLOCKS_PER_SEC) >= 1)    // 1초가 넘었을떄
//            {
//                score++;    //스코어 UP
//                start = clock();    //시작시간 초기화
//            }
//            Sleep(60);
//            system("cls");    //clear
//
//            //(v2.0) 점수출력을 1초마다 해주는것이 아니라 항상 출력해주면서, 1초가 지났을때 ++ 해줍니다.
//            GotoXY(22, 0);    //커서를 가운데 위쪽으로 옮긴다. 콘솔창이 cols=100이니까 2*x이므로 22정도 넣어줌
//            printf("Score : %d ", score);    //점수 출력해줌.
//        }
//
//        //(v2.0) 게임 오버 메뉴
//        DrawGameOver(score);
//    }
//    return 0;
//}
