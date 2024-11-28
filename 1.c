#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int t = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请依次输入数字，长度为10\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &t);
		arr[i] = t;
	}
	
	for (int i = 0; i < len; i++)
	{
		for (int j = len - 1; j >= i; j--)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%2d", arr[i]);
	}
	
	return 0;
}