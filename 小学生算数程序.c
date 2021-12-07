#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include <mmsystem.h>
#pragma comment(lib, "WINMM.LIB")
int WUJIN()
{
	while (1)
	{
		system("cls");
		printf("\n\n");
		printf("\t           ->指令目录           ");
		printf("\t1.开始                          ");
		printf("\t2.退出                          \n");


		switch (getch())
		{
		case'1':
		{
			clock_t start, end;
			start = clock();
			system("cls");
			printf("\n\t练习现在开始\n\n");
			printf("\t退出指令:999\n\n");
			int a1 = 0, a2 = 0, sum = 0, i = 0, z = 0, f = 1;
			while (1)
			{

				srand((unsigned int)time(0));
				int SUI[30];
				for (int i = 0; i < 30; i++)
				{
					SUI[i] = rand() % 100 + 1;
				}
				f = f + 1;
				if (f % 2 == 0)
				{
					a1 = SUI[3];
					a2 = SUI[29];
				}
				else
				{
					a1 = SUI[12];
					a2 = SUI[24];
				}
				printf("\t%d+%d=", a1, a2);
				scanf("%d", &sum);
				printf("\n");
				if (sum==999)
				{ 
					break;
				}				
			}
		}break;

		case'2':
		{
			return 0;
		}break;

		default:printf("指令错误，请重新输入");
		}
	}
}

int LIANXI()
{
	while(1)
	{ 
	system("cls");
	printf("\n\n");
	printf("\t           ->指令目录           ");
	printf("\t1.开始                          ");
	printf("\t2.退出                          \n");


		switch (getch())
		{
		case'1':
		{
			clock_t start, end;
			start = clock();
			system("cls");
			printf("\n\t练习现在开始\n\n");
			printf("\t退出指令:999\n\n");
			int a1 = 0, a2 = 0, sum = 0, i = 0, z = 0,f=1;
			while (1)
			{	

				srand((unsigned int)time(0));
				int SUI[30];
				for (int i = 0; i < 30; i++)
				{
					SUI[i] = rand() % 100 + 1;
				}
				f = f + 1;
				if (f % 2 == 0)
				{
					a1 = SUI[3];
					a2 = SUI[29];
				}
				else
				{
					a1 = SUI[12];
					a2 = SUI[24];
				}
				printf("\t%d+%d=", a1, a2);
				scanf("%d", &sum);
				printf("\n");
				if (sum == 999)
				{
					break;
				}
				if (a1 + a2 == sum) { z++; }
				i++;
				if (i == 10) 
				{ 
					end = clock();
					int q1,q2;
					if (z != 0)
					{
						q1 = z * 10;
						printf("你的正确率为:%d%%\n\n", q1);
						printf("用时:%.2f秒\n\n", (double)(end - start) / 1000);
						getchar(); getchar(); break;
					}
					else
					{ 
						printf("你的正确率为:0%%\n\n"); 
						printf("用时:%.2f秒\n\n", (double)(end - start) / 1000);
						getchar(); getchar(); break;
					}
				}
			}
		}break;

		case'2':
		{
			return 0;
		}break;

		default:printf("指令错误，请重新输入");
		}
	}
}

int JIANDAN()
{
	while (1)
	{
		system("cls");
		printf("\n\n");
		printf("\t           ->指令目录           ");
		printf("\t1.开始                          ");
		printf("\t2.退出                          \n");


		switch (getch())
		{
		case'1':
		{
			clock_t start, end;
			start = clock();
			system("cls");
			printf("\n\t练习现在开始\n\n");
			printf("\t退出指令:999\n\n");
			int a1 = 0, a2 = 0, sum = 0, i = 0, z = 0, f = 1;
			while (1)
			{

				srand((unsigned int)time(0));
				int SUI[30];
				for (int i = 0; i < 30; i++)
				{
					SUI[i] = rand() % 30 + 1;
				}
				f = f + 1;
				if (f % 2 == 0)
				{
					a1 = SUI[3];
					a2 = SUI[29];
				}
				else
				{
					a1 = SUI[12];
					a2 = SUI[24];
				}
				printf("\t%d+%d=", a1, a2);
				scanf("%d", &sum);
				printf("\n");
				if (sum == 999)
				{
					break;
				}
				if (a1 + a2 == sum) { z++; }
				i++;
				if (i == 10)
				{
					end = clock();
					int q1, q2;
					if (z != 0)
					{
						q1 = z * 10;
						printf("你的正确率为:%d%%\n\n", q1);
						printf("用时:%.2f秒\n\n", (double)(end - start) / 1000);
						getchar(); getchar(); break;
					}
					else
					{
						printf("你的正确率为:0%%\n\n");
						printf("用时:%.2f秒\n\n", (double)(end - start) / 1000);
						getchar(); getchar(); break;
					}
				}
			}
		}break;

		case'2':
		{
			return 0;
		}break;

		default:printf("指令错误，请重新输入");
		}
	}
}

int BANGZHU()
{
	system("cls");
	printf("\n\n\t加油\n\n");
	printf("\n\t回车键退出\n");
	getchar();  return 0;
}

//############################

int main()
{
	while(1)
	{ 
	mciSendString(TEXT("open D:\\桌面\\1.mp3 alias bkmusic"), NULL, 0, NULL);//播放音乐
	mciSendString(TEXT("play bkmusic"), NULL, 0, NULL);
	 system("cls");
	 printf("\n\n");
	 printf("\t->指令目录                    \n\n");
	 printf("\t1.简单模式                      \n\n");
	 printf("\t2.练习模式                      \n\n");
	 printf("\t3.无尽模式                      \n\n");
	 printf("\t4.查看帮助                      \n\n");
	 printf("\t5.退出                          \n\n");
		switch (getch()) 
		{
			case'1':JIANDAN(); break;
			case'2':LIANXI(); break;
			case'3':WUJIN(); break;
			case'4':BANGZHU(); break;
			case'5':return 0; break;
			default:printf("指令错误，请重新输入"); break;
		}
	}
	return 0;
}
