#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdlib>
#include<cstring>

struct bigdatacom
{
public:
	void init(const char *str1, const char *str2)
	{
		std::cout<<typeid(*this).name()<<std::endl ;//��ȡ�ṹ�������
		strcpy(this->dataa,str1);
		strcpy(this->datab,str2);
	
	}
	char * getbigdata()
	{
	
		int lena = strlen(dataa);
		int lenb = strlen(datab);
		int *presult = (int *)malloc(sizeof(int)*(lena + lenb));//���ٿռ���б�������Ľ��
		memset(presult, 0, sizeof(int)*(lena + lenb));
		
		//�����۳�
		for (int i = 0; i < lena; i++)
		{
			for (int j = 0; j < lenb; j++)
			{
				
				presult[i + j + 1] += (dataa[i] - '0')*(datab[j] - '0');
		
			}
		
		}
		//���н�λ
		for (int i = lena + lenb-1;i>=0 ;i--)
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
		char *lastresult =(char *) malloc(sizeof(char)*(lena + lenb));
		memset(lastresult, 0, sizeof(char)*(lena + lenb));
		int j = 0;
		for (j = 0; j < lena + lenb; j++,i++)
		{
			if (presult[i]>=0&&presult[i]<=9)
				lastresult[j] = presult[i] + '0';
		
		}
		lastresult[j] = '\0';
		return lastresult;
	}	


protected:
	char dataa[100];
	char datab[100];
};
//�̳У�
struct myclass:public bigdatacom
{

	void coutstr()
	{
		std::cout << this->dataa <<"     "<< this ->datab  << std::endl;
	
	}

};
int main()
{

	myclass class1;
	class1.init("99", "99");
	std::cout<<class1.getbigdata()<<std::endl;
	class1.coutstr();

	system("pause");
	return 0;
}