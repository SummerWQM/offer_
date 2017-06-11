
/*��һ���������飬�ҵ�������ʹ�����ǵĺ͵���һ���������� target��

����Ҫʵ�ֵĺ���twoSum��Ҫ���������������±�, ���ҵ�һ���±�С�ڵڶ����±ꡣע�������±�ķ�Χ�� 1 �� n�������� 0 ��ͷ��

 ע������

����Լ���ֻ��һ��𰸡�

������ʵ���������Ƿ�����������⣿ 
�ļҹ�˾���������⣿
��л���ķ���
����
���� numbers = [2, 7, 11, 15], target = 9, ���� [1, 2].
*/


class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        unordered_map<int,int> hash;
        vector<int > res;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(hash.find(target-nums[i]) != hash.end())
            {
                res.push_back(hash[target - nums[i]]+1);
                res.push_back(i+1);
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};
