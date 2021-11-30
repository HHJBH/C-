#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	char input[20];
	printf("\n\n--->>程序初始化完成\n\n");
	printf("--->>请输入你的第一步指令，例如：“加”或“+”\n\n");
start:
	gets(input);
	if (strstr(input, "加")
		|| strstr(input, "jia"))
	{
		printf("\n--->>请在输入数字后点击回车键\n\n");
		int shu1, shu2, sum;
		scanf_s("%d", &shu1);
		printf("+\n");
		scanf_s("%d", &shu2);
		printf("\n");
		sum = shu1 + shu2;
		printf("%d+%d=%d\n\n", shu1, shu2, sum);
		printf("--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "减")
		|| strstr(input, "jian"))
	{
		printf("\n--->>请在输入数字后点击回车键\n\n");
		int shu1, shu2, sum;
		scanf_s("%d", &shu1);
		printf("-\n");
		scanf_s("%d", &shu2);
		printf("\n");
		sum = shu1 - shu2;
		printf("%d-%d=%d\n\n", shu1, shu2, sum);
		printf("--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "乘")
		|| strstr(input, "cheng"))
	{
		printf("\n--->>请在输入数字后点击回车键\n\n");
		int shu1, shu2, sum;
		scanf_s("%d", &shu1);
		printf("*\n");
		scanf_s("%d", &shu2);
		printf("\n");
		sum = shu1 * shu2;
		printf("%d×%d=%d\n\n", shu1, shu2, sum);
		printf("--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "除")
		|| strstr(input, "chu"))
	{
		printf("\n--->>请在输入数字后点击回车键\n\n");
		int shu1, shu2, sum1,sum2;
		scanf_s("%d", &shu1);
		printf("/\n");
		scanf_s("%d", &shu2);
		printf("\n");
		sum1 = shu1 / shu2;
		sum2 = shu1 % shu2;
		printf("%d÷%d=%d……%d\n\n", shu1, shu2, sum1,sum2);
		printf("--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "响")
		|| strstr(input, "xiang"))
	{
		printf("\n");
		int shu1 = 0;
		while(shu1 <= 13)
		{
			shu1++;
			Beep(800, 200);
		}
		Sleep(1000);
		printf("\n--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "程"))
	{
		printf("\n--->>只适用于一元二次方程\n");
		printf("\n--->>请依次输入标准方程三个系数后点击回车键\n\n");
		double shu1, shu2, shu3, sum1, sum2, disc, x1, x2;
		scanf_s("%lf", &shu1);
		printf("\n");
		scanf_s("%lf", &shu2);
		printf("\n");
		scanf_s("%lf", &shu3);
		printf("\n");
		disc = shu2 * shu2 - 4 * shu1 * shu3;
		if (disc < 0)
			printf("这个方程没有解\n\n");
		else
		{
			sum1 = -shu2 / (2.0 * shu1);
			sum2 = sqrt(disc) / (2.0 * shu1);
			x1 = sum1 + sum2;
			x2 = sum1 - sum2;
			printf("这个方程的解为：\n\nx1=%7.2f\n\nx2=%7.2f\n\n", x1, x2);
		}
		printf("--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "四")
		||strstr(input, "多")
		|| strstr(input, "duo"))
	{	
	
		printf("\n");
		printf("请先输入你的第一步指令，例如：“加”或“+”\n");
		printf("输入“等于”时结束\n\n");
		char input[20];
	
		int shu1=0, shu2=0, sum,sum3,yu;//yu为除数的余数
		yu = 0;
		gets(input);
		if (strstr(input, "加")
			||strstr(input, "jia"))
		{
			scanf_s("%d",&shu1);
			printf("+\n");
			scanf_s("%d",&shu2);
			sum = shu1 + shu2;
			printf("目前的值为：%d\n", sum);
		}
		if (strstr(input, "减")
			|| strstr(input, "jian"))
		{
			scanf_s("%d", &shu1);
			printf("-\n");
			scanf_s("%d", &shu2);
			sum = shu1 - shu2;
			printf("目前的值为：%d\n", sum);
		}
		if (strstr(input, "乘")
			|| strstr(input, "cheng"))
		{
			scanf_s("%d", &shu1);
			printf("*\n");
			scanf_s("%d", &shu2);
			sum = shu1 * shu2;
			printf("目前的值为：%d\n", sum);
		}
		if (strstr(input, "除")
			|| strstr(input, "chu"))
		{
			scanf_s("%d", &shu1);
			printf("/\n");
			scanf_s("%d", &shu2);
			sum = shu1 / shu2;
			printf("目前的值为：%d\n", sum);
		}
		printf("请输入你的下一步指令，例如：“加”或“+”\n");
	start1:
		gets(input);
		if (strstr(input, "加")
			|| strstr(input, "+")
			|| strstr(input, "jia"))
		{
			scanf_s("%d", &shu2);
			sum = sum + shu2;
			printf("目前的值为：%d\n", sum);
		}
		if (strstr(input, "减")
			|| strstr(input, "-")
			|| strstr(input, "jian"))
		{
			scanf_s("%d", &shu2);
			sum = sum - shu2;
			printf("目前的值为：%d\n", sum);
		}
		if (strstr(input, "乘")
			|| strstr(input, "*")
			|| strstr(input, "cheng"))
		{
			scanf_s("%d", &shu2);
			sum = sum * shu2;
			printf("目前的值为：%d\n", sum);
		}
		if (strstr(input, "除")
			|| strstr(input, "/")
			|| strstr(input, "chu"))
		{
			scanf_s("%d", &shu2);
			sum3 = sum;
			sum = sum / shu2;
			yu = sum3 % shu2;
			printf("目前的值为：%d……%d\n", sum, yu);
		}
		if (strstr(input, "=")
			||strstr(input, "等于")
			|| strstr(input, "deng"))
		{
			printf("\n--->>这个式子的值为：%d……%d\n\n", sum, yu);
			printf("--->>请输入下一步指令\n\n");
			goto start;
		}
		goto start1;
	}
	if (strstr(input, "闹")
		|| strstr(input, "倒")
		|| strstr(input, "钟"))
	{
		printf("\n");
		int shi, feng, miao,shu1=0;
		printf("请输入小时:");
		scanf_s("%d", &shi);
		if (shi <= 60)
		{

			printf("请输入分钟:");
			scanf_s("%d", &feng);
			if (feng <= 60)
			{
				printf("请输入秒数:");	
				scanf_s("%d", &miao);
				if (miao <= 60)
				{
				start3:
					if (shi != 0&&feng < 1)
					{
						for (; feng < 1; )
						{
							shi = shi - 1;
							feng = 60;
						}
					}
					if (feng != 0)
					{
						for (; miao <= 1; )
						{
							feng = feng - 1;
							miao = 60;
						}
					}
					//if(miao!=0)
					for (; miao >= 1; )
					{
						miao = miao - 1;
						system("cls");
						printf("\n\n\t%0.2d:%0.2d:%0.2d\n", shi, feng, miao);
						Sleep(1000);
						
						if (shi >= 0 || feng >= 0 || miao >= 0)
						{
							goto start3;
						}
						else
							break;
					}
						
				}
				else
					printf("错误:\n");
			}
			else
				printf("错误:\n");
		}
		else
			printf("错误:\n");
		printf("\n");
		while (shu1 <= 13)
		{
			shu1++;
			Beep(800, 200);
		}
		Sleep(1000);
		printf("\n--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "清"))
	{
		system("cls");
		printf("\n\n--->>请输入下一步指令\n\n");
	}
	if (strstr(input, "再见")
		|| strstr(input, "Bye")
		|| strstr(input, "bye")
		|| strstr(input, "关闭")
		|| strstr(input, "晚安")
		)
	{
		printf("\n--->>好的!\n\n");
		return 0;
	}

	//÷
	goto start;
	return 0;
}
