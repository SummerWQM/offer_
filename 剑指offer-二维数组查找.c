//������3����λ�����еĲ��� 
//��������Ҫ���һ����������ʱ��һ������Ч�ķ������ǴӾ����������֣�ͨ��������������ӣ��õ����ɡ� 
//��һ����ά�����У�ÿһ�ж�Ҫ���մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����С������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        //�õ��е�size
        int row = array[0].size();
        int column = array.size();

        //����һ���߽���Ϣ
        int i = 0, j = row - 1;

        //Whileѭ��������ƣ�
        while (i < column && j >= 0) {
            //���targetС�ڱ߽�����ֵ�����ʱ��������λ��֮ǰ��
            if (target < array[i][j]) {
                j--;
            ////���target���ڱ߽�����ֵ�����ʱ��������λ����һ����
            } else if (target > array[i][j]) {
                i++;
            } else {
                return true;
            }
        }
        return false;
    }
};
#include<stdio.h>
#include<stdlib.h>
int find_arr(int arr[][3], int rows, int cols, int num)
{
    if (arr != NULL&& rows > 0 && cols > 0)
    {
        int row = 0;
        int col = cols - 1;
        while (row < rows&&col >= 0)
        {
            if (arr[row][col] == num)
            {
                return 1;
            }
            else if (arr[row][col]>num)
                row--;
            else
                col++;
        }
    }
    return 0;
}
int main()
{
    int arr[][3] = { 1, 2, 3, 2, 3, 4, 5, 6, 7 };
    int num = 0;
    printf("����������Ҫ���ҵ�Ԫ�أ�");
    scanf("%d", &num);
    int ret=find_arr(arr,3,3,num);
    if (ret == 0)
        printf("û���ҵ�%d", num);
    else
        printf("����Ԫ��%d", num);
    system("pause");
    return 0;
}