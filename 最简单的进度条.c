#include<stdio.h> 
//#include<unistd.h>
#include<windows.h>
int main()
{
	printf("\n\n---初始化完成---\n\n");
	char input[20];
start:
	gets(input);
	if (strstr(input, "进度"))
	{
		printf("\n");
		printf("**    \r");
		fflush(stdout);
		Sleep(1);
		printf("***    \r");
		fflush(stdout);
		Sleep(1);
		printf("*****   \r");
		fflush(stdout);
		Sleep(1);
		printf("*******    \r");
		fflush(stdout);
		Sleep(1);
		printf("*********    \r");
		fflush(stdout);
		Sleep(1);
		printf("***********     \r");
		fflush(stdout);
		Sleep(1);
		printf("**************    \r");
		fflush(stdout);
		Sleep(1);
		printf("********************\r");
		fflush(stdout);
		Sleep(1);
		printf("\n\n");
		goto start;
	}
	else
		printf("\n成功\n");
	system("pause");
	return 0;
}
