#include<cstdlib>
#include<iostream>


//��ŵ������������ķ�ʽ���в�����
//�ݹ飬���ǿ���һ������һ�������еݹ�Ĳ����Ϳ�����
//�ݹ�ľ��������ÿһ����Ҫ���������һ��

void hannuo(int m,char a,char b,char c)
{
	if (m < 1)
	{
		return;
	}
	else
	{
		hannuo(m - 1, a, c, b);
		std::cout << a << "->" << c << std::endl;
		hannuo(m - 1, b, a, c);
		
	}
	
}

int main()
{
	int m(0);
	std::cout << "���뺺ŵ������" << std::endl;
	std::cin >> m;
	hannuo(m,'a','b','c');
	system("pause");
	return 0;
}
