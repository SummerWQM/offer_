#include<cstdlib>
#include<iostream>


//��ŵ������������ķ�ʽ���в�����
//�ݹ飬���ǿ���һ������һ�������еݹ�Ĳ����Ϳ�����
//�ݹ�ľ��������ÿһ����Ҫ���������һ��

//f(n)=2^n-1
int cout = 0;
void hannuo(int m,char a,char b,char c)
{
	if (m < 1)
	{
		return;
	}
	else
	{
		hannuo(m - 1, a, c, b);
		cout++;
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
	std::cout << "���ƶ�������"<<cout << std::endl;
	system("pause");
	return 0;
}
