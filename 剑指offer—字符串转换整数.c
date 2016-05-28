
#include<stdio.h>
#include<stdlib.h>

long long transform(char *str)
{
	int flag = 1;
	int num = 0;
	int radix = 0;
	//�жϿ��ַ���
	if (str == NULL)
	{
		return 0;
	}
	//�жϿո�����
	while (*str==' '||*str=='\t')
	{
		str++;
	}

	//-���
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//+���
	else if (*str=='+')
	{
		str++;
	}

	//���ǽ��Ƶ�����
	if (*str == '0' && (*(str + 1) == 'X' || *(str + 1) == 'x'))//ʮ������
	{
		radix = 16;
		str += 2;
	}else if(*str == '0')//�˽���
	{
		radix  = 8;
		str++;
	}else //ʮ����
	{
		radix = 10;
	}
	while (*str)
	{
		if (radix == 16)
		{
			if (*str >= '0' && *str < '9')
			{
				num = num*radix + (*str - '0');//����ʮ������0-9
			}
			else
			{
				num = num*radix + (*str - 'a' + 10);//����a-f
			}
		}
		else
		{
			num = num*radix + (*str - '0');
		}
		str++;
	}
	return num*flag;
}
int main()
{

	char *str = "45678";
	long long ret = 0;
	ret=transform(str);
	printf("%ld", ret);
	system("pause");
	return 0;
}