


/*��ʧ�ĵ�һ�������� 

�Ѷ�ϵ�� �е� ͨ���� 22%
 ����
 �ʼ�
 ����
 ����
����һ��������������飬�ҳ�����û�г��ֵ���С��������

������ʵ���������Ƿ�����������⣿ Yes
����
������� [1,2,0], return 3
������� [3,4,-1,1], return 2

��ս 
ֻ����ʱ�临�Ӷ�O(n)���㷨������ֻ��ʹ�ó�������Ŀռ䡣
*/

class Solution {
public:
    /**    
     * @param A: a vector of integers
     * @return: an integer
     */
    int firstMissingPositive(vector<int> nums) {
        // write your code here
        for(int i = 0 ;i<nums.size(); i++)
        {
            while(nums[i] != nums.size()+1 && nums[i]>=1 && nums[i] < nums.size())
            {
                if(nums[nums[i] - 1] == nums[i])
                    break;
                else
                    swap(nums[i],nums[nums[i] - 1]);
            }
        }
        
        for(int i = 0; i < nums.size(); i++)
        {  
            if(nums[i] != i+1)
            {
                return i+1;
            }
        }
        return nums.size()+1;
    }
};