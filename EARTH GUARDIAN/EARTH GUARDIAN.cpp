
#pragma warning(disable:4996)

#include "stdafx.h"
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

#define BULLETMAX 6
#define ENEMYMAX 15
#define ITEM 10
#define EFFECTMAX 30

#define HARDSPEED 1
#define NORMALSPEED 2
#define EASYSPEED 3
void gotoxy(int x, int y) {
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void Intro()
{
	system("cls");
	gotoxy(0, 0);
	printf("┌─────────────────────────────────────┐\n");
	printf("│**************************************************************************│\n");
	printf("│**************************************************************************│\n");
	printf("│                       E A R T H      G U A R D I A N                     │\n");
	printf("│                         어  스           가 디 언                        │\n");
	printf("│**************************************************************************│\n");
	printf("│**************************************************************************│\n");
	printf("│                                  조 작 법                                │\n");
	printf("│                             오른쪽  :  j                                 │\n");
	printf("│                                왼쪽 :  l                                 │\n");
	printf("│                                  총 :  k                                 │\n");
	printf("│**************************************************************************│\n");
	printf("│                                  난 이 도                                │\n");
	printf("│                                 쉬움 : a                                 │\n");
	printf("│                                 보통 : s                                 │\n");
	printf("│                               어려움 : d                                 │\n");
	printf("│**************************************************************************│\n");
	printf("│                                   설 명                                  │\n");
	printf("│         외계인 ( ○ ) : 지구를 침략합니다. 정의의 총알에 약합니다.       │\n");
	printf("│    가디언 하트 ( ♡ ) : 지구에 들어온 외계인을 1회 더 수비합니다.        │\n");
	printf("│      수소 폭탄 ( ⓢ ) : 외계인을 모두 말살합니다. 취급주의 제품입니다.   │\n");
	printf("│네크로맨서 폭탄 ( ⓝ ) : 외계인이살아난다아아앙아아앙                     │\n");
	printf("│**************************************************************************│\n");
	printf("│**************************************************************************│\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("└─────────────────────────────────────┘\n");
}
void Stage(int nStage)
{
	system("cls");
	gotoxy(0, 0);
	printf("┌─────────────────────────────────────┐\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	if (nStage >= 10)
		printf("│                                S t a g e %d                              │\n", nStage);
	else
		printf("│                                S t a g e %d                               │\n", nStage);
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("└─────────────────────────────────────┘\n");
}
void Result(int nStage)
{
	system("cls");
	gotoxy(0, 0);
	printf("┌─────────────────────────────────────┐\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	if (nStage >= 10)
		printf("│                              %d S t a g e s                              │\n", nStage - 1);
	else
		printf("│                               %d S t a g e s                              │\n", nStage - 1);
	printf("│                              C l e a r e d !                             │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("└─────────────────────────────────────┘\n");
}
void Success(int nStage)
{
	system("cls");
	gotoxy(0, 0);
	printf("┌─────────────────────────────────────┐\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	if (nStage >= 10)
		printf("│                                S t a g e %d                              │\n", nStage);
	else
		printf("│                                S t a g e %d                               │\n", nStage);
	printf("│                               M i s s i o n                              │\n");
	printf("│                                 C l e a r                                │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("└─────────────────────────────────────┘\n");
}
void Failed()
{
	system("cls");
	gotoxy(0, 0);
	printf("┌─────────────────────────────────────┐\n");
	printf("│**************************************************************************│\n");
	printf("│**************************************************************************│\n");
	printf("│                              M i s s o n                                 │\n");
	printf("│                              F a i l e d                                 │\n");
	printf("│**************************************************************************│\n");
	printf("│**************************************************************************│\n");
	printf("│                      용사여 일어나시겠습니까? (n/y)                      │\n");
	printf("│**************************************************************************│\n");
	printf("│**************************************************************************│\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("│                                                                          │\n");
	printf("└─────────────────────────────────────┘\n");
}
typedef enum _GAME_STATE
{
	INIT, RUNNING, SUCCESS, FAILED, RESULT, END
} GAME_STATE;
GAME_STATE g_GameState = INIT;

typedef enum _GAME_INFO
{
	NONE, KILLHEART_1, KILLHEART_2, KILLNB, KILLBOMB, KILLENEMY_1, KILLENEMY_2, KILLENEMY_3, GETHEART_1, GETHEART_2
} GAME_INFO;
GAME_INFO g_Info = NONE;

typedef struct _OBJECT
{
	int nLife;
	int nX, nY;
	int nOldFrame;
} OBJECT;
OBJECT g_Enemy[15], g_Bullet[10], g_Heart[11], g_Bomb[11], g_Nbomb[11];
//총,적군,하트,폭탄 의 의 구조체

typedef struct _EFFECT
{
	int nLife;
	int nX, nY;
	int nStepCount;
	int nOldFrame;
} EFFECT;
EFFECT g_Effect[30];
//폭발이펙트 구조체 

typedef struct _PLAYER
{
	int nX, nY;
	int nLifePower;
	int nIndex;
} PLAYER;
PLAYER g_Player;
int g_nFrameCount;
//주인공 구조체

int g_Xpos[] = { 0,4,8,12,16,20,24,28,32,36 };

int main()
{
	srand(time(NULL));

	clock_t CurTime, OldTime;
	g_Player.nIndex = 0;
	g_Player.nX = g_Xpos[g_Player.nIndex];
	g_Player.nY = 24;
	OldTime = clock();
	int i, j, k, livingBullet, nKey, nYN, nStage = 0, bombKill = 0, g_Speed = 1, g_InfoRand;
	int count = 0, stagecount = 15, enemyKillCheck, heartCheck = 0, bombCheck = 0, nbombCheck = 0, enemyCheck = 0, bulletCheck = 0, effectCheck = 0;
	while (1)
	{
		if (g_GameState == END)
			break;

		if (_kbhit())
		{
			nKey = _getch();
			switch (nKey)
			{
			case 'j': //왼쪽이동
				if (g_Player.nIndex - 1 >= 0)
				{
					g_Player.nIndex--;
					g_Player.nX = g_Player.nX - 5;
				}
				break;

			case 'l': //오른쪽이동
				if (g_Player.nIndex < 9)
				{
					g_Player.nIndex++;
					g_Player.nX = g_Player.nX + 5;
				}
				break;

			case 'k':  //총
				if (g_Bullet[bulletCheck].nLife == 0)
				{
					g_Bullet[bulletCheck].nLife = 1;
					g_Bullet[bulletCheck].nOldFrame = g_nFrameCount;
					g_Bullet[bulletCheck].nX = g_Xpos[g_Player.nIndex];
					g_Bullet[bulletCheck].nY = 23;
					bulletCheck == BULLETMAX - 1 ? bulletCheck = 0 : bulletCheck++;
				}
				break;
			}
		}

		switch (g_GameState)
		{
		case INIT:
			count = 0;
			heartCheck = 0;
			bombCheck = 0;
			nbombCheck = 0;
			bulletCheck = 0;
			effectCheck = 0;
			g_Info = NONE;

			if (nStage == 0)
			{
				Intro();
				nStage = 1;
				while (1)
				{
					nKey = _getch();
					if (nKey == 'a')
					{
						g_Speed = EASYSPEED;
						break;
					}
					if (nKey == 's')
					{
						g_Speed = NORMALSPEED;
						break;
					}
					if (nKey == 'd')
					{
						g_Speed = HARDSPEED;
						break;
					}
				}
			}
			//초기화면
			g_Player.nLifePower = 3;
			for (i = 0; i < BULLETMAX; i++)  //총알초기화
				g_Bullet[i].nLife = 0;

			for (i = 0; i < ENEMYMAX; i++)  //적 초기화
				g_Enemy[i].nLife = 0;

			for (i = 0; i < EFFECTMAX; i++)    //이펙트초기화
				g_Effect[i].nLife = 0;

			for (i = 0; i < ITEM; i++) //하트, 폭탄, 네크로맨서 폭탄 초기화
			{
				g_Heart[i].nLife = 0;
				g_Bomb[i].nLife = 0;
				g_Nbomb[i].nLife = 0;
			}

			Stage(nStage);
			_getch();
			g_GameState = RUNNING;
			break;

		case RUNNING: //실행부
					  /*
					  if (count % 5 == 0 && count != 0 && count != enemyKillCheck)  //적군 n킬시마다 방어 1추가(미사용)
					  {
					  enemyKillCheck = count;
					  g_Player.nLifePower++;
					  }*/
			bombKill = 0;

			if (stagecount <= count)   //미션 클리어 조건
				g_GameState = SUCCESS;

			if (g_Player.nLifePower <= 0)  //미션 실패조건
				g_GameState = FAILED;

			for (i = 0; i < BULLETMAX; i++)  //총알 실행부 (이동)
			{
				if (g_Bullet[i].nLife)
				{
					if (g_nFrameCount - g_Bullet[i].nOldFrame > 1)
					{
						if (g_Bullet[i].nY - 1 == 0) //벽에부딪힌경우
							g_Bullet[i].nLife = 0;
						else
						{
							g_Bullet[i].nY--;       //아닌경우 (이동)
							g_Bullet[i].nOldFrame = g_nFrameCount;
						}
					}
				}
			}

			for (i = 0; i < ENEMYMAX; i++)   //적군 실행부(이동)
			{
				if (g_Enemy[i].nLife)
				{
					if (g_nFrameCount - g_Enemy[i].nOldFrame > g_Speed)
					{
						if (g_Enemy[i].nY + 1 == 30) //벽에부딪힌경우
						{
							g_Player.nLifePower--;
							g_Enemy[i].nLife = 0;
						}
						else                        //아닌경우 (이동)
						{
							g_Enemy[i].nOldFrame = g_nFrameCount;
							g_Enemy[i].nY++;
						}
					}
				}
			}

			if (rand() % 30 == 1)  //적군 생성부
			{
				for (i = 0; i < ENEMYMAX; i++)
				{
					if (g_Enemy[i].nLife == 0)
					{
						g_Enemy[i].nLife = 1;
						g_Enemy[i].nX = g_Xpos[rand() % 9];
						g_Enemy[i].nY = 0;
						break;
					}
				}
			}

			for (i = 0; i < ITEM; i++)   //아이템 실행부(이동)
			{
				if (g_Heart[i].nLife)  //하트 실행부(이동)
				{
					if (g_nFrameCount - g_Heart[i].nOldFrame > g_Speed)
					{
						if (g_Heart[i].nY + 1 == 30) //벽에부딪힌경우
							g_Heart[i].nLife = 0;
						else                        //아닌경우 (이동)
						{
							g_Heart[i].nOldFrame = g_nFrameCount;
							g_Heart[i].nY++;
						}
					}
				}
				if (g_Bomb[i].nLife)			//폭탄 실행부(이동)
				{
					if (g_nFrameCount - g_Bomb[i].nOldFrame > g_Speed)
					{
						if (g_Bomb[i].nY + 1 == 30) //벽에부딪힌경우
							g_Bomb[i].nLife = 0;
						else                        //아닌경우 (이동)
						{
							g_Bomb[i].nOldFrame = g_nFrameCount;
							g_Bomb[i].nY++;
						}
					}
				}
				if (g_Nbomb[i].nLife)				//네크로맨서 폭탄 실행부(이동)
				{
					if (g_nFrameCount - g_Nbomb[i].nOldFrame > g_Speed)
					{
						if (g_Nbomb[i].nY + 1 == 30) //벽에부딪힌경우
							g_Nbomb[i].nLife = 0;
						else                        //아닌경우 (이동)
						{
							g_Nbomb[i].nOldFrame = g_nFrameCount;
							g_Nbomb[i].nY++;
						}
					}
				}
			}

			if (rand() % 400 == 1) //하트 생성부
			{
				g_Heart[heartCheck].nLife = 1;
				g_Heart[heartCheck].nX = g_Xpos[rand() % 9];
				g_Heart[heartCheck].nY = 0;
				heartCheck == 9 ? heartCheck = 0 : heartCheck++;
			}

			if (rand() % 400 == 1) //폭탄 생성부
			{
				if (g_Bomb[bombCheck].nLife == 0)
				{
					g_Bomb[bombCheck].nLife = 1;
					g_Bomb[bombCheck].nX = g_Xpos[rand() % 9];
					g_Bomb[bombCheck].nY = 0;
					bombCheck == 9 ? bombCheck = 0 : bombCheck++;
				}
			}
			if (rand() % 400 == 1) //네크로멘서 폭탄 생성부
			{
				if (g_Nbomb[nbombCheck].nLife == 0)
				{
					g_Nbomb[nbombCheck].nLife = 1;
					g_Nbomb[nbombCheck].nX = g_Xpos[rand() % 9];
					g_Nbomb[nbombCheck].nY = 0;
					nbombCheck == 9 ? nbombCheck = 0 : nbombCheck++;
				}
			}
			for (i = 0; i < BULLETMAX; i++)               //총알과의 충돌판정
			{
				for (j = 0; j < ENEMYMAX; j++)
				{
					if (g_Enemy[j].nLife && g_Bullet[i].nLife) //총알과 적군 모두 살아있을때
					{
						if (g_Enemy[j].nX == g_Bullet[i].nX && g_Enemy[j].nY >= g_Bullet[i].nY && 25 > g_Enemy[j].nY)  //충돌판정
						{
							count++;
							if (g_Effect[effectCheck].nLife == 0)
							{
								g_Enemy[j].nLife = 0;
								g_Bullet[i].nLife = 0;
								g_Effect[effectCheck].nLife = 1;
								g_Effect[effectCheck].nOldFrame = g_nFrameCount;
								g_Effect[effectCheck].nX = g_Enemy[j].nX;
								g_Effect[effectCheck].nY = g_Enemy[j].nY;

								effectCheck == EFFECTMAX - 1 ? effectCheck = 0 : effectCheck++;

								g_InfoRand = rand() % 3;
								if (g_InfoRand == 0)
									g_Info = KILLENEMY_1;
								if (g_InfoRand == 1)
									g_Info = KILLENEMY_2;
								if (g_InfoRand == 2)
									g_Info = KILLENEMY_3;
								break;
							}
						}
					}
				}
				for (j = 0; j < ITEM; j++)
				{
					if (g_Heart[j].nLife && g_Bullet[i].nLife) //총알과 하트 모두 살아있을때
					{
						if (g_Heart[j].nX == g_Bullet[i].nX && g_Heart[j].nY >= g_Bullet[i].nY && 25 > g_Heart[j].nY)  //충돌판정
						{
							if (g_Effect[effectCheck].nLife == 0)
							{
								g_Heart[j].nLife = 0;
								g_Bullet[i].nLife = 0;
								g_Effect[effectCheck].nLife = 1;
								g_Effect[effectCheck].nOldFrame = g_nFrameCount;
								g_Effect[effectCheck].nX = g_Heart[j].nX;
								g_Effect[effectCheck].nY = g_Heart[j].nY;

								effectCheck == EFFECTMAX - 1 ? effectCheck = 0 : effectCheck++;

								g_InfoRand = rand() % 2;
								if (g_InfoRand == 0)
									g_Info = KILLHEART_1;
								if (g_InfoRand == 1)
									g_Info = KILLHEART_2;
								break;
							}
						}
					}
					if (g_Bomb[j].nLife && g_Bullet[i].nLife) //총알과 폭탄 모두 살아있을때
					{
						if (g_Bomb[j].nX == g_Bullet[i].nX && g_Bomb[j].nY >= g_Bullet[i].nY && 25 > g_Bomb[j].nY)  //충돌판정
						{
							if (g_Effect[effectCheck].nLife == 0)
							{
								g_Bomb[j].nLife = 0;
								g_Bullet[i].nLife = 0;
								g_Effect[effectCheck].nLife = 1;
								g_Effect[effectCheck].nOldFrame = g_nFrameCount;
								g_Effect[effectCheck].nX = g_Bomb[j].nX;
								g_Effect[effectCheck].nY = g_Bomb[j].nY;
								g_Player.nLifePower--;

								effectCheck == EFFECTMAX - 1 ? effectCheck = 0 : effectCheck++;

								g_Info = KILLBOMB;

								for (i = 0; i < ENEMYMAX; i++)
								{
									if (g_Enemy[i].nLife == 1)
									{
										g_Enemy[i].nLife = 0;
										bombKill++;
									}
								}
								break;
							}
						}
					}
					if (g_Nbomb[j].nLife && g_Bullet[i].nLife) //총알과 네크로맨서 폭탄 모두 살아있을때
					{
						if (g_Nbomb[j].nX == g_Bullet[i].nX && g_Nbomb[j].nY >= g_Bullet[i].nY && 25 > g_Nbomb[j].nY)  //충돌판정
						{
							for (k = 0; k < EFFECTMAX; k++)
							{
								if (g_Effect[effectCheck].nLife == 0)
								{
									g_Nbomb[j].nLife = 0;
									g_Bullet[i].nLife = 0;
									g_Effect[effectCheck].nLife = 1;
									g_Effect[effectCheck].nOldFrame = g_nFrameCount;
									g_Effect[effectCheck].nX = g_Nbomb[j].nX;
									g_Effect[effectCheck].nY = g_Nbomb[j].nY;

									effectCheck == EFFECTMAX - 1 ? effectCheck = 0 : effectCheck++;

									g_Info = KILLNB;

									for (i = 0; i < ENEMYMAX; i++)      //적부활
									{
										if (g_Enemy[i].nLife == 0)
										{
											g_Enemy[i].nLife = 1;
											g_Enemy[i].nY = 0;
											g_Enemy[i].nX = g_Xpos[rand() % 9];
										}
									}
									break;
								}
							}
						}
					}
				}
			}

			count = count + bombKill;

			for (i = 0; i < ITEM; i++) //하트 먹었을때
			{
				if (g_Heart[i].nLife && g_Player.nX == g_Heart[i].nX && g_Player.nY == g_Heart[i].nY)
				{
					g_Player.nLifePower++;
					g_Heart[i].nLife = 0;

					g_InfoRand = rand() % 2;
					if (g_InfoRand == 0)
						g_Info = GETHEART_1;
					if (g_InfoRand == 1)
						g_Info = GETHEART_2;
				}
			}

			for (i = 0; i < EFFECTMAX; i++)  //폭발이펙트 폭발중 
			{
				if (g_Effect[i].nLife)
				{
					if (g_nFrameCount - g_Effect[i].nOldFrame > 3)
					{
						g_Effect[i].nStepCount++;
						g_Effect[i].nOldFrame = g_nFrameCount;
						if (g_Effect[i].nStepCount > 3)
						{
							g_Effect[i].nLife = 0;
							g_Effect[i].nStepCount = 0;
						}
					}
				}
			}
			//출력부 
			system("cls");

			gotoxy(0, 30);   //지면 출력부 
			printf("---------------------------------------");
			gotoxy(17, 32);   //지구 출력부 
			printf("지구임");

			switch (g_Info)
			{
			case KILLBOMB:
				gotoxy(48, 10);
				printf("쿠콰콰콰콰콰콰콰콰콰콰콰광!!!!!");
				break;
			case KILLENEMY_1:
				gotoxy(48, 10);
				printf("으악!");
				break;
			case KILLENEMY_2:
				gotoxy(48, 10);
				printf("크헉....!");
				break;
			case KILLENEMY_3:
				gotoxy(48, 10);
				printf("끼에에에엙!!");
				break;
			case KILLHEART_1:
				gotoxy(48, 10);
				printf("당신의 의지가 깨졌다...");
				break;
			case KILLHEART_2:
				gotoxy(48, 10);
				printf("안돼! 소중한 하트가!!!");
				break;
			case KILLNB:
				gotoxy(48, 10);
				printf("하늘에서 외계인이 빗발친다!!");
				break;
			case GETHEART_1:
				gotoxy(48, 10);
				printf("당신은 의지로 가득찼다!");
				break;
			case GETHEART_2:
				gotoxy(48, 10);
				printf("방어력 증가!!!");
				break;
			}
			gotoxy(48, 14);
			printf("난이도 : %s", g_Speed == HARDSPEED ? "어려움" : g_Speed == NORMALSPEED ? "보통" : "쉬움");  //기타 정보 출력부 
			gotoxy(48, 15);
			printf("스테이지 : %d", nStage);
			gotoxy(48, 16);
			printf("점수 : %d/%d", count, stagecount);
			gotoxy(48, 17);
			printf("방어가능한 적의 수 : %d", g_Player.nLifePower);

			livingBullet = 0;
			for (i = 0; i < BULLETMAX; i++) //남은총알의 수
			{
				if (g_Bullet[i].nLife)
					livingBullet++;
			}
			gotoxy(48, 18);
			printf("사용가능한 총알 수 : %d", BULLETMAX - livingBullet);


			for (i = 0; i < EFFECTMAX; i++)  //폭발이펙트 출력부 
			{
				if (g_Effect[i].nLife)
				{
					if (g_Effect[i].nX - g_Effect[i].nStepCount >= 0)  //벽과 겹치는것을 방지
					{
						gotoxy(g_Effect[i].nX - g_Effect[i].nStepCount, g_Effect[i].nY - g_Effect[i].nStepCount);
						printf("☆");
					}
					gotoxy(g_Effect[i].nX + g_Effect[i].nStepCount, g_Effect[i].nY - g_Effect[i].nStepCount);
					printf("☆");
					if (g_Effect[i].nX - g_Effect[i].nStepCount >= 0)  //벽과 겹치는것을 방지
					{
						gotoxy(g_Effect[i].nX - g_Effect[i].nStepCount, g_Effect[i].nY + g_Effect[i].nStepCount);
						printf("☆");
					}
					gotoxy(g_Effect[i].nX + g_Effect[i].nStepCount, g_Effect[i].nY + g_Effect[i].nStepCount);
					printf("☆");
				}
			}

			for (i = 0; i < ENEMYMAX; i++)//적 출력부
			{
				if (g_Enemy[i].nLife)
				{
					gotoxy(g_Enemy[i].nX, g_Enemy[i].nY);
					printf("○");
				}
			}
			for (i = 0; i < BULLETMAX; i++)//총알 출력부
			{
				if (g_Bullet[i].nLife)
				{
					gotoxy(g_Bullet[i].nX, g_Bullet[i].nY);
					printf("▲");
				}
			}

			for (i = 0; i < ITEM; i++) //하트 출력부
			{
				if (g_Heart[i].nLife)
				{
					gotoxy(g_Heart[i].nX, g_Heart[i].nY);
					printf("♥");
				}
				if (g_Bomb[i].nLife)        //폭탄 출력부
				{
					gotoxy(g_Bomb[i].nX, g_Bomb[i].nY);
					printf("ⓢ");
				}
				if (g_Nbomb[i].nLife)		//네크로맨서 폭탄 출력부
				{
					gotoxy(g_Nbomb[i].nX, g_Nbomb[i].nY);
					printf("ⓝ");
				}
			}


			g_Player.nX = g_Xpos[g_Player.nIndex];  //플레이어 출력부
			gotoxy(g_Player.nX, g_Player.nY);
			printf("■");

			/*
			for (i = 2; i <= 38; i = i + 4)       //칸막이 출력(미사용)
			{
			for (j = 0; j < 30; j = j + 5)
			{
			gotoxy(i,j);
			printf("ㅣ");
			}
			}
			*/
			break;


		case SUCCESS:
			Success(nStage);
			nStage++;
			stagecount = stagecount + 5;
			_getch();
			g_GameState = INIT;
			break;

		case FAILED:
			Failed();
			while (1)
			{
				nYN = _getch();

				if (nYN == 'y' || nYN == 'Y')
				{
					g_GameState = INIT;
					break;
				}
				if (nYN == 'n' || nYN == 'N')
				{
					g_GameState = RESULT;
					break;
				}
			}
			break;

		case RESULT:
			Result(nStage);
			_getch();
			g_GameState = END;
			break;
		}

		while (1)
		{
			CurTime = clock();
			if (CurTime - OldTime > 33) {
				OldTime = CurTime;
				break;
			}
		}
		g_nFrameCount++;
	}
	return 0;
}


