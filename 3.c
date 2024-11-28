#include<stdio.h>

int main()
{
	int arr[21] = { 0 };
	int found = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("20个数组成等差数列，已知前4个数的和是26，积是880\n");
	for (int j = -5; j <= 5; j++)//穷举d
	{
		for (int a = -20; a <= 20; a++)
		{
			arr[1] = a;//穷举a1

			for (int i = 1; i <= 4; i++)
			{
				arr[i] = arr[1] + (i - 1) * j;
			}//赋值a1-a4

			if ((arr[1] + arr[4]) == 13 && (arr[1] * arr[2] * arr[3] * arr[4]) == 880)
			{
				found = 1;
				printf("找到符合条件的等差数列：\n");
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
		printf("未找到符合条件的等差数列\n");
	}
    return 0;
}

//#include <stdio.h>
//
//int main() {
//    int arr[20];  // 数组长度调整为20
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int found = 1;
//    printf("20个数组成等差数列，已知前4个数的和是26，积是880\n");
//
//    // 穷举等差数列的公差j
//    for (int j = -10; j <= 10; j++) {  // 公差j从1到5
//        // 穷举等差数列的首项
//        for (int first = -20; first <= 20; first++) {  // 首项从1到20
//            // 计算前4项
//            arr[0] = first;
//            arr[1] = first + j;
//            arr[2] = first + 2 * j;
//            arr[3] = first + 3 * j;
//
//            // 判断前4项的和是否为26，积是否为880
//            if ((arr[0] + arr[3]) == 13 &&(arr[0] * arr[1] * arr[2] * arr[3]) == 880) 
//            {
//                // 如果满足条件，计算整个数列
//                for (int k = 0; k < len; k++) {
//                    arr[k] = first + k * j;
//                }
//
//                // 打印等差数列，按每5个数换行
//                printf("找到符合条件的等差数列：\n");
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
//        printf("未找到符合条件的等差数列\n");
//    }
//    return 0;
//}