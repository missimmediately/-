#include<stdio.h>

int main()
{
	int arr[21] = { 0 };
	int found = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("20������ɵȲ����У���֪ǰ4�����ĺ���26������880\n");
	for (int j = -5; j <= 5; j++)//���d
	{
		for (int a = -20; a <= 20; a++)
		{
			arr[1] = a;//���a1

			for (int i = 1; i <= 4; i++)
			{
				arr[i] = arr[1] + (i - 1) * j;
			}//��ֵa1-a4

			if ((arr[1] + arr[4]) == 13 && (arr[1] * arr[2] * arr[3] * arr[4]) == 880)
			{
				found = 1;
				printf("�ҵ����������ĵȲ����У�\n");
				for (int k = 1; k < 21; k++)
				{
					arr[k] = arr[1] + (k - 1) * j;
				}
				for (int m = 1; m < 21; m++)
				{
					if ((m - 1) % 5 == 0 && (m - 1) != 0)
						printf("\n");
					printf("%5d", arr[m]);
				}
				printf("\n");
			}
		}
	}
	if (!found)
	{
		printf("δ�ҵ����������ĵȲ�����\n");
	}
    return 0;
}

//#include <stdio.h>
//
//int main() {
//    int arr[20];  // ���鳤�ȵ���Ϊ20
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int found = 1;
//    printf("20������ɵȲ����У���֪ǰ4�����ĺ���26������880\n");
//
//    // ��ٵȲ����еĹ���j
//    for (int j = -10; j <= 10; j++) {  // ����j��1��5
//        // ��ٵȲ����е�����
//        for (int first = -20; first <= 20; first++) {  // �����1��20
//            // ����ǰ4��
//            arr[0] = first;
//            arr[1] = first + j;
//            arr[2] = first + 2 * j;
//            arr[3] = first + 3 * j;
//
//            // �ж�ǰ4��ĺ��Ƿ�Ϊ26�����Ƿ�Ϊ880
//            if ((arr[0] + arr[3]) == 13 &&(arr[0] * arr[1] * arr[2] * arr[3]) == 880) 
//            {
//                // �������������������������
//                for (int k = 0; k < len; k++) {
//                    arr[k] = first + k * j;
//                }
//
//                // ��ӡ�Ȳ����У���ÿ5��������
//                printf("�ҵ����������ĵȲ����У�\n");
//                for (int i = 0; i < len; i++) {
//                    if (i % 5 == 0 && i != 0) {
//                        printf("\n");
//                    }
//                    printf("%5d", arr[i]);
//                }
//                printf("\n");
//                found = 0;
//            }
//        }
//    }
//    if (found)
//    {
//        printf("δ�ҵ����������ĵȲ�����\n");
//    }
//    return 0;
//}