#include <stdio.h>
int main()
{
	int n;
	printf("请输入整数的数量");
	scanf_s("%d",&n);
	int a[200];
	for (int i = 0; i < n; i++)//逐个输入n正数
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n-1; i++)//起泡法，两两交换n个数需要排n-1次
	{
		for (int j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])//如果前一个数比后一个大，则前后两个数换位置。
			{
				int t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)//逐个输出排列好的整数
	{
		printf("%d", a[i]);
	}
}