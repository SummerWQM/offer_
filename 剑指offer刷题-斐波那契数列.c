
/*������9��쳲���������
��Ŀһ��дһ������������n����쳲��������еĵ�n�쳲��������еĶ������£���n=0ʱ��f(n)=0,��n=1ʱ��f(n)=1,��n>1ʱ��f(n)=f(n-1)+f(n-2)��*/

#include<stdio.h>
#include<stdlib.h>

//�ݹ��㷨
long long fib(unsigned int n)
{
	if (n == 1)
		return 1;
	else if (n <= 0)
		return 0;
	else
		return fib(n - 1) + fib(n - 2);	//�ݹ飬
}
//�ǵݹ��㷨
long long fib_2(unsigned int n)
{

	long long fib1 = 1;
	long long fib2 = 0;
	unsigned int i = 0;
	for (i = 0; i < n ; i++)
	{
		fib1 = fib1 + fib2;//���������һ���㷨������fib1���������ǰ�����ĺ͡����Ҹ����˵�һ����������ĵ�һ����������һ�μ����е�fib1��
		fib2 = fib1 - fib2;//�����Ƕ�������Ҫ�������м��㣬��������µ�fib1��ȥfib2�����µĵڶ�����
	}
	return fib2;

}
unsigned long long* Fib_3(int n)
{
	assert(n >= 0);
	unsigned long long *Fib = new unsigned long long[n];
	Fib[0] = 0;
	Fib[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	return Fib;
}


unsigned long long Fib_4(int n)
{
	assert(n >= 0);

	unsigned long long FibArray[3] = { 0, 1, n };
	for (int i = 2; i <=n; i++)
	{
		FibArray[2] = FibArray[1] + FibArray[0];
		FibArray[0] = FibArray[1];
		FibArray[1] = FibArray[2];
	}
	return FibArray[2];
}
int main()
{
	unsigned int n = 0;
	long long ret = 0;
	printf("Please give the first few items:\n");
	scanf("%u", &n);
	ret = fib(n);
	printf("%lld\n", ret);
	system("pause");
	return 0;
}
