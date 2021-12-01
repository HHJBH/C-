#include<stdio.h>
int main()
{
	char grade;
	scanf_s("%c", &grade);
	printf("Your score:");
	
	//if(strstr(grade,"A"))
	
	switch (grade)
	{
	case'A':printf("aaaa"); break;
	case'B':printf("bbbb"); break;
	default:printf("enter data error!\n");
	}
	//else
	return 0;
}
