//������14����������˳��ʹ������λ��ż��ǰ��
//��Ŀ������һ���������飬ʵ��һ��������������������
//���ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
//���е�ż��λ������ĺ�벿�֡�
//
//
//
//

#include<stdio.h>
#include<stdlib.h>
void sort_arr(int *p, int count)
{
	int *left = p;
	int *right = p + count - 1;
	if (p == NULL || count == 0)
		return;
	while (left < right)
	{
		while ((left < right) && ((*left) & 1) != 0)
		{
			left++;
		}
		while ((left < right) &&( (*right) & 1)== 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *right;
			*right = *left;
			*left = tmp;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	sort_arr(arr, sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}