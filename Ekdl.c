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
////�ܼ� â�� ũ��� ������ �����ϴ� �Լ�
//void SetConsoleView()
//{
//	system("mode con:cols=100 lines=25");
//	system("title Google Dinosaurs.");
//}
//
////Ŀ���� ��ġ�� x, y�� �̵��ϴ� �Լ�
//void GotoXY(int x, int y)
//{
//	COORD Pos;
//	Pos.X = 2 * x;
//	Pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
////Ű������ �Է��� �ް�, �Էµ� Ű�� ���� ��ȯ�ϴ� �Լ�
//int GetKeyDown()
//{
//	if (_kbhit() != 0)
//	{
//		return _getch();
//	}
//	return 0;
//}
//
//// ���� ���� ����â
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
////������ �׸��� �Լ�
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
////������ �׸��� �Լ�
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
////��� �������� �׸��� �Լ�
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
////�������� ������ ����� ����Ʈȿ���� �׸��� �Լ�
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
////��ֹ��� �ε����� ��Ÿ���� ����Ʈȿ���� �׸��� �Լ�
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
////(v2.0) �浹 ������ ���ӿ��� �׷���
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
////(v2.0) �浹������ true, �ƴϸ� false
//bool isCollision(const int treeX, const int itemX, const int dinoY, const int life)
//{
//	//������ �ε����� �� �� �ִ� Ƚ�� ����  
//	//Ʈ���� X�� ������ ��ü�ʿ� ������,
//	//������ ���̰� ������� �ʴٸ� �浹�� ó��
//	GotoXY(0, 0);
//	printf("treeX : %d, itemX : %d, dinoY : %d, life : %d", treeX, itemX, dinoY, life); //�̷������� ������ X, Y�� ã���ϴ�.
//	if (treeX <= 7 && treeX >= 6 && dinoY > 8)
//	{
//		return true;
//	}
//	return false;
//}
//
////������(���)������ life 1�� �þ�� �Լ�����  
//bool isCollision2(const int treeX, const int itemX, const int dinoY, const int life)
//{
//	GotoXY(0, 0);
//	printf("treeX : %d, itemX : %d, dinoY : %d, life : %d", treeX, itemX, dinoY, life); //�̷������� ������ X, Y�� ã���ϴ�.
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
//	//���� ������ ���Ӽ����ϴ� �Լ��ڵ� �߰�  
//	DrawGameStart();
//	while (true)		//(v2.0) ���� ����
//	{
//		//���� ���۽� �ʱ�ȭ
//		bool isJumping = false;
//		bool isBottom = true;
//		const int gravity = 3;
//
//		int dinoY = DINO_BOTTOM_Y;
//		int treeX = TREE_BOTTOM_X;
//		int itemX = ITEM_BOTTOM_X;
//
//		int score = 0;
//		//������� �߰�  
//		int life = 5;
//		clock_t start, curr;	//���� ���� �ʱ�ȭ
//		start = clock();		//���۽ð� �ʱ�ȭ
//
//		while (true)	//�� �ǿ� ���� ����
//		{
//			//(v2.0) �浹üũ Ʈ���� x���� ������ y������ �Ǵ�
//			if (isCollision(treeX, itemX, dinoY, life)) {
//				//�浹�� life 1�� ����  
//				life--;
//				//�浹�� ����Ʈ �Լ� ȣ��  
//				tree_effect(treeX);
//				if (life == 0) break;
//			}
//
//			//������ ������ life 1�� ����  
//			if (isCollision2(treeX, itemX, dinoY, life)) {
//				life++;
//				//������ ��Ʈ ����Ʈ �Լ� ȣ��  
//				item_effect(itemX);
//			}
//
//			//zŰ�� ���Ȱ�, �ٴ��� �ƴҶ� ����
//			if (GetKeyDown() == 'z' && isBottom)
//			{
//				isJumping = true;
//				isBottom = false;
//			}
//
//			//�������̶�� Y�� ����, ������ �������� Y�� ����.
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
//			//Y�� ����ؼ� �����ϴ°� �������� �ٴ��� ����.
//			if (dinoY >= DINO_BOTTOM_Y)
//			{
//				dinoY = DINO_BOTTOM_Y;
//				isBottom = true;
//			}
//
//			//����,�������� �������� (x����) �������ϰ�
//			//����,�������� ��ġ�� ���� �����ΰ��� �ٽ� ������ ������ ��ȯ.
//			treeX -= 2;
//			itemX -= 1;
//
//			//���� �ð��� ���� ��, ��ֹ� �ӵ� ���� 
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
//			//������ ������ ������ ������ ���� ��Ȳ.
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
//			curr = clock();			//����ð� �޾ƿ���
//			if (((curr - start) / CLOCKS_PER_SEC) >= 1)	// 1�ʰ� �Ѿ���??
//			{
//				score++;	//���ھ� UP
//				start = clock();	//���۽ð� �ʱ�ȭ
//			}
//			Sleep(60);
//			system("cls");	//clear
//
//			//(v2.0) ��������� 1�ʸ��� ���ִ°��� �ƴ϶� �׻� ������ָ鼭, 1�ʰ� �������� ++ ���ݴϴ�.
//			GotoXY(22, 0);	//Ŀ���� ��� �������� �ű��. �ܼ�â�� cols=100�̴ϱ� 2*x�̹Ƿ� 22���� �־���
//			printf("        Score : %d ", score);	//���� �������.
//		}
//
//		//(v2.0) ���� ���� �޴�
//		DrawGameOver(score);
//	}
//	return 0;
//}

//[C/C++ game] very simple google dinosaur. (by. BlockDMask)
//2019.12.03 (v2.0)���� �߰�, �浹ó�� �߰�.
//#include<stdio.h>
//#include<windows.h>
//#include<conio.h>
//#include<time.h>
//#define DINO_BOTTOM_Y 12
//#define TREE_BOTTOM_Y 20
//#define TREE_BOTTOM_X 45
//
////�ܼ� â�� ũ��� ������ �����ϴ� �Լ�
//void SetConsoleView()
//{
//    system("mode con:cols=100 lines=25");
//    system("title Google Dinosaurs. By BlockDMask.");
//}
//
////Ŀ���� ��ġ�� x, y�� �̵��ϴ� �Լ�
//void GotoXY(int x, int y)
//{
//    COORD Pos;
//    Pos.X = 2 * x;
//    Pos.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
////Ű������ �Է��� �ް�, �Էµ� Ű�� ���� ��ȯ�ϴ� �Լ�
//int GetKeyDown()
//{
//    if (_kbhit() != 0)
//    {
//        return _getch();
//    }
//    return 0;
//}
//
////������ �׸��� �Լ�
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
////������ �׸��� �Լ�
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
////(v2.0) �浹 ������ ���ӿ��� �׷���
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
////(v2.0) �浹������ true, �ƴϸ� false
//bool isCollision(const int treeX, const int dinoY)
//{
//    //Ʈ���� X�� ������ ��ü�ʿ� ������,
//    //������ ���̰� ������� �ʴٸ� �浹�� ó��
//    GotoXY(0, 0);
//    printf("treeX : %d, dinoY : %d", treeX, dinoY); //�̷������� ������ X, Y�� ã���ϴ�.
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
//    while (true)        //(v2.0) ���� ����
//    {
//        //���� ���۽� �ʱ�ȭ
//        bool isJumping = false;
//        bool isBottom = true;
//        const int gravity = 3;
//
//        int dinoY = DINO_BOTTOM_Y;
//        int treeX = TREE_BOTTOM_X;
//
//        int score = 0;
//        clock_t start, curr;    //���� ���� �ʱ�ȭ
//        start = clock();        //���۽ð� �ʱ�ȭ
//
//        while (true)    //�� �ǿ� ���� ����
//        {
//            //(v2.0) �浹üũ Ʈ���� x���� ������ y������ �Ǵ�
//            if (isCollision(treeX, dinoY))
//                break;
//
//            //zŰ�� ���Ȱ�, �ٴ��� �ƴҶ� ����
//            if (GetKeyDown() == 'z' && isBottom)
//            {
//                isJumping = true;
//                isBottom = false;
//            }
//
//            //�������̶�� Y�� ����, ������ �������� Y�� ����.
//            if (isJumping)
//            {
//                dinoY -= gravity;
//            }
//            else
//            {
//                dinoY += gravity;
//            }
//
//            //Y�� ����ؼ� �����ϴ°� �������� �ٴ��� ����.
//            if (dinoY >= DINO_BOTTOM_Y)
//            {
//                dinoY = DINO_BOTTOM_Y;
//                isBottom = true;
//            }
//
//            //������ �������� (x����) �������ϰ�
//            //������ ��ġ�� ���� �����ΰ��� �ٽ� ������ ������ ��ȯ.
//            treeX -= 2;
//            if (treeX <= 0)
//            {
//                treeX = TREE_BOTTOM_X;
//            }
//
//            //������ ������ ������ ������ ���� ��Ȳ.
//            if (dinoY <= 3)
//            {
//                isJumping = false;
//            }
//
//            DrawDino(dinoY);        //draw dino
//            DrawTree(treeX);        //draw Tree
//
//            //(v2.0)
//            curr = clock();            //����ð� �޾ƿ���
//            if (((curr - start) / CLOCKS_PER_SEC) >= 1)    // 1�ʰ� �Ѿ�����
//            {
//                score++;    //���ھ� UP
//                start = clock();    //���۽ð� �ʱ�ȭ
//            }
//            Sleep(60);
//            system("cls");    //clear
//
//            //(v2.0) ��������� 1�ʸ��� ���ִ°��� �ƴ϶� �׻� ������ָ鼭, 1�ʰ� �������� ++ ���ݴϴ�.
//            GotoXY(22, 0);    //Ŀ���� ��� �������� �ű��. �ܼ�â�� cols=100�̴ϱ� 2*x�̹Ƿ� 22���� �־���
//            printf("Score : %d ", score);    //���� �������.
//        }
//
//        //(v2.0) ���� ���� �޴�
//        DrawGameOver(score);
//    }
//    return 0;
//}
