

/*����һ���ַ���source��һ��Ŀ���ַ���target�����ַ���source���ҵ���������Ŀ���ַ�����ĸ���Ӵ���

 ע������

�����source��û���������Ӵ�������""������ж���������Ӵ���������ʼλ����С���Ӵ���

������ʵ���������Ƿ�����������⣿ 
�ļҹ�˾���������⣿
��л���ķ���
˵��
�ڴ𰸵��Ӵ��е���ĸ��Ŀ���ַ������Ƿ���Ҫ������ͬ��˳��

��������Ҫ��

����
����source = "ADOBECODEBANC"��target = "ABC" ����Ҫ��Ľ�  "BANC"

��ս 
Ҫ��ʱ�临�Ӷ�ΪO(n)

*/


class Solution {
public:    
    /**
     * @param source: A string
     * @param target: A string
     * @return: A string denote the minimum window
     *          Return "" if there is no such a string
     */
    string minWindow(string &s, string &t) {
        // write your code here
        unordered_map<char, int> mp;
        for (char now : t) {
            mp[now]++;
        }
        int count = mp.size();
        int j = 0;
        int ans = INT_MAX;
        string res; 
        for (int i = 0; i < s.size(); i++) {
            while(count != 0 && j < s.size()) {
                mp[s[j]]--;
                if (mp[s[j]] == 0) {
                    count--;
                }
                j++;
                if (count == 0) {
                    break;
                }
            }
            if (count == 0 && j - i< ans) {
                ans = j - i;
                res = s.substr(i, j - i);
                
            }
            if(mp[s[i]] == 0) {
                count++;
            }
            mp[s[i]]++;
        }
        return res;
    }


};
