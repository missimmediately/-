#include<stdio.h>
//查找下标
int find(int arr[], int num,int left,int right)
{
	if (left > right) {
		return -1;  // 递归结束条件，找不到时返回-1
	}
	int mid = (left + right) / 2;
	if (arr[mid] == num){
		return mid;
	}
	else if (arr[mid] < num){//右边
		return find(arr, num, mid + 1, right);
	}
	else if (arr[mid] > num){//左边
		return find(arr, num, left, mid - 1);
	}
	return 1;
}

int find2(int arr[], int num, int left, int right)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == num) {//右边
			return mid;
		}
		else if (arr[mid] < num) {
			left = mid + 1;
		}
		else {//左边
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int arr[100] = { 0 };
	int t = 0;
	int size = 0;//自定义大小
	int len = sizeof(arr) / sizeof(arr[0]); //数组长度
	int flag = 1;//判断是否超过数组边界
	
	while (flag) {
		printf("请输入数集大小\n");
		scanf("%d", &size);
		if (size > len)
		{
			printf("数集大小超过最大值，请重新输入\n");
		}
		else
		{
			flag = 0;
		}
	}

	printf("请依次输入数字，长度为%d\n", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &t);
		arr[i] = t;
	}

	//升序
	for (int i = size-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//打印
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("输入需要查找的数值:>");
	int num = 0;
	int left = 0;
	int right = size-1;
	int location = 0;
	scanf("%d", &num);

	location = find(arr, num,left,right);
	if (location == -1)
	{
		printf("Not be found\n");
	}
	else
	{
		printf("下标为%d\n", location);
	}

	return 0;
}