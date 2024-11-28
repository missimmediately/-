#include<stdio.h>
//�����±�
int find(int arr[], int num,int left,int right)
{
	if (left > right) {
		return -1;  // �ݹ�����������Ҳ���ʱ����-1
	}
	int mid = (left + right) / 2;
	if (arr[mid] == num){
		return mid;
	}
	else if (arr[mid] < num){//�ұ�
		return find(arr, num, mid + 1, right);
	}
	else if (arr[mid] > num){//���
		return find(arr, num, left, mid - 1);
	}
	return 1;
}

int find2(int arr[], int num, int left, int right)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == num) {//�ұ�
			return mid;
		}
		else if (arr[mid] < num) {
			left = mid + 1;
		}
		else {//���
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int arr[100] = { 0 };
	int t = 0;
	int size = 0;//�Զ����С
	int len = sizeof(arr) / sizeof(arr[0]); //���鳤��
	int flag = 1;//�ж��Ƿ񳬹�����߽�
	
	while (flag) {
		printf("������������С\n");
		scanf("%d", &size);
		if (size > len)
		{
			printf("������С�������ֵ������������\n");
		}
		else
		{
			flag = 0;
		}
	}

	printf("�������������֣�����Ϊ%d\n", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &t);
		arr[i] = t;
	}

	//����
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

	//��ӡ
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("������Ҫ���ҵ���ֵ:>");
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
		printf("�±�Ϊ%d\n", location);
	}

	return 0;
}