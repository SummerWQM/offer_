//面试题4：替换空格 
//请实现一个函数，把字符串中的每个空格替换成为“%20”.例如输入“We are happy”,则输出“We%20are%20happy”
//
//
//
//
//
//
class Solution {
public:
    void replaceSpace(char *str,int length) {
        if( NULL == str) return;
        int space_cout = 0;
        for (int i = 0; i < length; ++i) {
            if (str[i] == ' ') space_cout++;
        }
        int newlength = length + space_cout * 2 - 1;
        for (int i = length - 1; i >= 0; ++i) {
            if (str[i] == ' ') {
                str[newlength--] = '0';
                str[newlength--] = '2';
                str[newlength--] = '%';
                space_cout--;
                if(space_cout == 0) break;
                continue;
            }
            str[newlength--] = str[i];
        }

    }
};



class solution {
  void Replace(char* arr) {
  	int len = strlen(arr);
		int count = 0;
		char *p = arr;
		int old_end = len;
		int new_end = 0;
		while (*p) {
			if (*p == ' ') {
				count++;
			}
			p++;
		}	
		new_end = len + 2 * count;

		while (old_end < new_end) {
			if (arr[old_end] == ' ') {
				old_end--;
				arr[new_end--] = '$';
				arr[new_end--] = '$';
				arr[new_end--] = '$';
			}
			else {
				arr[new_end--] = arr[old_end--];
			}
		}
	}
}

