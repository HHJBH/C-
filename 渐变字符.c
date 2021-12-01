#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome to here!!!!!!!!";
	char arr2[] = "#######################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		system("cls");
		left++;
		right--;
		printf("%s",arr2);
	}
	return 0;
}
