#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <mmsystem.h>
#pragma comment(lib, "WINMM.LIB")
#include<time.h>
#pragma warning(disable : 4996)
static  void  SetPos(int  x, int  y)
{
    COORD  point = { x ,  y }; //光标要设置的位置x,y
    HANDLE  HOutput = GetStdHandle(STD_OUTPUT_HANDLE); //使用GetStdHandle(STD_OUTPUT_HANDLE)来获取标准输出的句柄
    SetConsoleCursorPosition(HOutput, point); //设置光标位置
}//以上三行代码是设置一个“光标归位”的函数 SetPos( x , y );
int main()
{
    FILE* fp;   //要建立文件流操作的时候，需要先定义一个指针变量
    char buf[150], add[60], ai[5];  //定义变量
    int i = 1, delay = 33;
    clock_t stime = 0, ftime = 0;


    mciSendString(TEXT("open D:\\桌面\\BadApple.wav alias bkmusic"), NULL, 0, NULL);//播放音乐
    mciSendString(TEXT("play bkmusic"), NULL, 0, NULL);
    /* Sleep(200);*/
    stime = clock();//播放音乐随后就开始计时，用stime存贮当前的时间（clock（）会返回当前时间）
    while (i <= 6566)
    {
        if (i % 30 == 0)
        {
            delay = 43; //简单的赋值
        }
        else
        {
            delay = 33;
        }

        strcpy(add, "D:\\桌面\\字符文本\\BA (");         //strcpy(s1,s2);      表示把字符串“s2”拷贝到“s1”中
        sprintf(ai, "%d", i);                            //sprintf(s,%d,123);  表示把整数打印到字符串中
        strcat(add, ai);                                 //strcat(str1,str2);  用于拼接两个字符串 ,接受两个字符串作为参数                 
        strcat(add, ").txt");                            //strcpy(s1,s2);      表示把字符串“s2”拷贝到“s1”中
        // 名字修改
        ftime = clock();//clock（）会返回当前时间   C语言函数clock（）　　 //功 能 : 返回处理器调用某个进程或函数所花费的时间。
        if (ftime - stime >= delay) //功 能 : 返回处理器调用某个进程或函数所花费的时间。
        {
            fp = fopen(add, "r");//打印文本 //打开文件"add"给“fp”,“r”表示只读

            if (NULL == fp)                 //打开文本失败的情况
                printf("打开错误");
            else
            {
                while (fgets(buf, 150, fp))     //打开文本成功的情况    //重要：本行中fgets()函数表示：
                {                                                       //从输入流“fp”即输入缓冲区中读取150个字符到字符组buf中
                    printf("%s", buf);//打印  %s表示接受字符串
                }
                fclose(fp);//关闭文件
                SetPos(0, 0);   //光标归位（0,0）
                i++;
                stime += delay;         //stime=stime+delay;

            }
        }
    }
    return 0;
}
