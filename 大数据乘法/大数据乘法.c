

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


void getbigdata(char *dataa, char *datab)
{
	int lena = strlen(dataa);
	int lenb = strlen(datab);
	int *presult = (int *)malloc(sizeof(int)*(lena + lenb));//���ٿռ���б�������Ľ��
	memset(presult, 0, sizeof(int)*(lena + lenb));
	for (int i = 0; i < lena; i++)
	{
		for (int j = 0; j < lenb; j++)
		{
			presult[i + j + 1] += (dataa[i] - '0')*(datab[j] - '0');

		}

	}

	for (int i = lena + lenb - 1; i >= 0; i--)
	{
		if (presult[i] >= 10)
		{
			presult[i - 1] += presult[i] / 10;//ʮλ��λ
			presult[i] %= 10;//�����λ
		}
	}
	int i = 0;
	while (presult[i] == 0)//����ͷ����0
	{
		i++;
	}
	//����iǡ���ڲ�Ϊ0��λ�á�
	
	char *lastresult = (char *)malloc(sizeof(char)*(lena + lenb));
	memset(lastresult, 0, sizeof(char)*(lena + lenb));
	int j = 0;
	for (j = 0; j < lena + lenb; j++, i++)
	{
		if (presult[i] >= 0 && presult[i] <= 9)
			lastresult[j] = presult[i] + '0';

	}
	lastresult[j] = '\0';
	printf("lastresult=%s\n", lastresult);
}



int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	scanf("%s%s", str1, str2);
	printf("resault=%s,resault=%s\n", str1, str2);
	getbigdata(str1, str2);


	system("pause");
	return 0;
}
