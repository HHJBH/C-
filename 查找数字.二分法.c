#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;//因为是从0开始，所以减一
	while (left <= right)//不可能交叉，最多重叠，同时要注意左右关系
	{
		int mid = (left + right) / 2;//计算中间值mid
		if (arr[mid] > k)//判断中间值与K的关系
		{
			right = mid - 1;//减去右边一半
		}
		else if (arr[mid] < k)//同上
		{
			left = mid + 1;//减去左边一半
		}
		else
		{
			printf("找到了，下标为:%d\n", mid);//否则相等直接输出
			break;
		}
	}
	if (left > right)//判断条件不可省
	{
		printf("找不打\n");
	}
	return 0;
}
