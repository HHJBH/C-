#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//[]中不加数字是不限制该数组的大小
	int k = 7;//寻找的值
	//写一行代码，在数组（有序的）中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数
	for (i = 0; i < sz; i++)//注意条件，i<sz表示i=sz不执行
	{
		if (k == arr[i])//顺序找
		{
			printf("找到了，下标是:%d\n", i);
			break;
		}
	}
	if (i == sz)//判断不可省
		printf("找不到\n");
	return 0;
}
