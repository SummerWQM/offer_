//������40��

//��Ŀ��һ�����������������������֮�⣬���������ֶ����������Ρ���ӳ������ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ��ĸ��Ӷ�ΪO(n)���ռ临�Ӷ���O(1)��
//
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int judge_1(int n, int bit)
{
    n = n >> bit;
    return (n & 1);

}
void find_number( char* arr, int sz, int *num1, int* num2)
{
    int bit = 0;
    assert(arr);
    int ret = 0;

    int i = 0;
    int j = 0;
    for (i = 0; i < sz; i++)
        ret = ret^arr[i];
    while (((ret & 1) == 0)&&(bit < 32))//������������Ѱ�����ұ���1��λ��
    {

            ret >>= 1;
            bit++;

    }
    *num1 = *num2 = 0;

    for (j = 0; j < sz; j++)
    {
        if (judge_1(arr[j], bit))//�����жϴ��ұ��������bit��һλ�ǲ���1
        {
            *num1 ^= arr[j];//����1�����ó����
        }
        else
            *num2 ^= arr[j];//������1�����ó����
    }
}


int main()
{
    int num1 = 0;
    int num2 = 0;
    char arr[] = { 0,1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    find_number(arr,sz,&num1,&num2);
    printf("%d,%d", num1, num2);
    system("pause");
    return 0;
}
