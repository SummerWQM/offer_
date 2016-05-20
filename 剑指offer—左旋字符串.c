
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void revolve_left1(char str[], int k)//��һ�ַ���
{
	assert(str);
	int len = strlen(str);//����ַ����ĳ���
	char tmp = 0;//����������Ҫ��λ���ַ�
	if (k < len)
	{
		for (int i = 0; i < k; i++)
		{
			tmp = str[0];
			for (int j = 0; j < len - 1; j++)
			{
				str[j] = str[j + 1];//�Ժ�����ַ�����ǰ��λ��
			}
			str[len - 1] = tmp;//�ѵ�һ���ַ��ŵ�����λ��
		}
	}
	else
	{
		exit(1);
	}
}
void reverse(char *left,char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;

	}
}
void revolve_left(char *str, int k)//�ڶ��ַ���
{
	int len = strlen(str);
	assert(str);
	if (k<len&&k>0 && len > 0)
	{
		reverse(str, str + k - 1);
		reverse(str + k, str + len - 1);
		reverse(str, str + len - 1);
	}
}
int main()
{
	char str[] = "abcdefg";
	int k = 0;
	printf("����������Ҫ��ת���ַ�������");
	scanf("%d", &k);
	revolve_left(str, k);
	printf("%s\n", str);
	system("pause");
	return 0;
}