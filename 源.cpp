#include <stdio.h>
int main()
{
	int n;
	printf("����������������");
	scanf_s("%d",&n);
	int a[200];
	for (int i = 0; i < n; i++)//�������n����
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n-1; i++)//���ݷ�����������n������Ҫ��n-1��
	{
		for (int j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])//���ǰһ�����Ⱥ�һ������ǰ����������λ�á�
			{
				int t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)//���������кõ�����
	{
		printf("%d", a[i]);
	}
}