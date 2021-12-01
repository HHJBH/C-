#include<time.h>
#include<windows.h>
#include< stdio.h>
#include<conio.h>
#include<graphics.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
int main()
{
	clock_t stime=0;
	initgraph(900, 700);
	
	IMAGE m;
	loadimage(&m,"D:\\m.jpg",900,700);
	putimage(0, 0, &m);

	mciSendString(TEXT("open D:\\12.mp3 alias bkmusic"), NULL, 0, NULL);
	mciSendString(TEXT("play bkmusic"), NULL, 0, NULL);
	int i = 0;
   while（i < = 256）//可以修改持续时间
	{
		Sleep(1000);
		i++;
	}
	return 0;
}
