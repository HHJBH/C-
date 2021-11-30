#include<stdio.h>
int main()
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3 == 0)
			continue;//只希望本次终止，break则是终止循环
		printf("%d\n", n);
	}
	printf("\n");
	return 0;
}
