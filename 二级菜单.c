#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
   
int SHUNXU()
{
	while (1)
	{
		system("cls");
		printf("\t*******项目一顺序结构********\n");
		printf("\t***** 1.任务一自动找零机*****\n");
		printf("\t***** 2.扩展提升任务    *****\n");
		printf("\t***** 3.返回上一级菜单  *****\n");
		printf("\t*****************************\n");
		printf("\t请输入功能编号:   \n");
	  switch (getch())
	  {
		case'1':
		{
			system("cls");
			printf("\t任务1自动找零机正在运行:\n");
			int s1, s2, s;
			int a1 = 0, a2 = 0, a3 = 0;
			printf("\t请输入购买金额:");
			scanf("%d", &s1);
			printf("\n");
			printf("\t请输入付款金额:");
			scanf("%d", &s2);
			printf("\n");
			if (s1 > s2)
			{
				Beep(800, 600);
				printf("\t付款金额不足");
				getchar();
			}
			else
			{
				s = s2 - s1;
				a1 = s / 10;
				s = s - a1 * 10;
				a2 = s / 5;
				s = s - a2 * 5;
				a3 = s / 1;
				printf("\t应找金额为:%d张10元，%d张5元，%d张1元\n", a1, a2, a3);
				getchar(); getchar();//使画面静止
			}

		}
		break;
		case'2':
		{
			system("cls");
			printf("\t扩展提升任务正在运行:\n");
			double s1=0, s2=0, s=0;
			int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
			printf("\t请输入购买金额:");
			scanf("%lf", &s1);
			printf("\n");
			printf("\t请输入付款金额:");
			scanf("%lf", &s2);
			printf("\n");
			if (s1 > s2)
			{
				Beep(800, 600);
				printf("\t付款金额不足");
				getchar();
			}
			else
			{
				s = s2 - s1;
				a1 = s / 10.0;
				s = s - a1 * 10.0;
				a2 = s / 5;
				s = s - a2 * 5.0;
				a3 = s / 1.0;
				s = s - a3 * 1.0;
				a4 = s / 0.50;
				s = s - a4 * 0.50;
				a5 = s / 0.10;
				printf("\t应找金额为:%d张10元，%d张5元，%d张1元,%d张5毛,%d张1毛\n", a1, a2, a3, a4, a5);
				getchar(); getchar();//使画面静止

			}
			break;
		case'3':
		{
			return 0;
		}
		default:
			printf("输入错误，请重新输入\n"); break;
		}

	  }

	}
}
int XUANZE()
{
	while (1)
	{
		system("cls");
		printf("\t*********项目二选择结构**********\n");
		printf("\t***  1.任务1三角形判断        ***\n");
		printf("\t***  2.任务2简单的四则计算机  ***\n");
		printf("\t***  3.返回上一级菜单         ***\n");
		printf("\t*********************************\n");
		printf("\t请输入功能编号:   \n");
	  switch (getch())
	  {
		case'1':
		{   
			system("cls");
			printf("\t三角形判断任务正在运行:\n");
			int c1 = 0; int c2 = 0; int c3 = 0;
			printf("\t请分别输入三角形的三条边，中间以空格隔开:");
			scanf("%d %d %d", &c1,&c2,&c3);
			if(c1+c2>c3&&c1+c3>c2&&c2+c3>c1)
			{
				printf("\t是三角形");
			}
			else
			{
				printf("\t不是三角形");
			}
			getchar(); getchar();
		}break;
		case'2':
		{
			
			while (1) 
					
			{   
					system("cls");
					printf("\n");
					printf("四则计算机程序正在运行:\n");
					printf("输入5退出,加1减2乘3除4，加为1.\n");
					printf("--->>请输入你指令，例如：“1”\n\n");
				switch (getch())
				{
					

				case'1':
				{
					printf("\n--->>加。请在输入数字后点击回车键\n\n");
					int shu1, shu2, sum;
					scanf_s("%d", &shu1);
					printf("+\n");
					scanf_s("%d", &shu2);
					printf("\n");
					sum = shu1 + shu2;
					printf("%d+%d=%d\n\n", shu1, shu2, sum);
					printf("--->>请输入下一步指令\n\n");
					getchar(); getchar();
				}break;
				case'2':
				{
					printf("\n--->>减。请在输入数字后点击回车键\n\n");
					int shu1, shu2, sum;
					scanf_s("%d", &shu1);
					printf("-\n");
					scanf_s("%d", &shu2);
					printf("\n");
					sum = shu1 - shu2;
					printf("%d-%d=%d\n\n", shu1, shu2, sum);
					printf("--->>请输入下一步指令\n\n");
					getchar(); getchar();
				}break;
				case'3':
				{
					printf("\n--->>乘。请在输入数字后点击回车键\n\n");
					int shu1, shu2, sum;
					scanf_s("%d", &shu1);
					printf("*\n");
					scanf_s("%d", &shu2);
					printf("\n");
					sum = shu1 * shu2;
					printf("%d×%d=%d\n\n", shu1, shu2, sum);
					printf("--->>请输入下一步指令\n\n");
					getchar(); getchar();
				}break;
				case'4':
				{
					printf("\n--->>除。请在输入数字后点击回车键\n\n");
					int shu1, shu2, sum1, sum2;
					scanf_s("%d", &shu1);
					printf("/\n");
					scanf_s("%d", &shu2);
					printf("\n");
					sum1 = shu1 / shu2;
					sum2 = shu1 % shu2;
					printf("%d÷%d=%d……%d\n\n", shu1, shu2, sum1, sum2);
					printf("--->>请输入下一步指令\n\n");
					getchar(); getchar();
				}break;
				case'5':
					{
						break;
					}
				default:
					printf("输入错误，请重新输入\n"); break;
				}break;
			}   
		}
		case'3':
		
			return 0;
			break;
		default:
			printf("输入错误，请重新输入\n"); break;
	   }


	}
}
int XUNHUAN()
{
	system("cls");
	switch (getch())
	{
	case'1':
	{
		printf("不想做");
	}break;
	case'2':return 0; break;
	}
}



int main()
{	
	while (1)
	{
		system("cls");
	printf("\t*************目录**************\n");
	printf("\t*** 1.项目一顺序结构程序设计***\n");
	printf("\t*** 2.项目二选择结构程序设计***\n");
	printf("\t*** 3.项目三循环结构程序设计***\n");
	printf("\t*** 4.退出	            ***\n");
	printf("\t*******************************\n");
	printf("\t请输入功能编号:   \n");

		switch (getch())
		{

		case '1':SHUNXU(); break;
		case '2':XUANZE(); break;
		case '3':XUNHUAN(); break;
		case'4': return 0;  break;
		default:
			printf("输入错误，请重新输入\n"); break;
		}
	}
	return 0;
}
