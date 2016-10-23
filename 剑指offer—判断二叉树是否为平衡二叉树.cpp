//���ĸ߶�
	size_t _Height(Node *root)
	{
		if (root == NULL)
			return 0;
		size_t lheight = _Height(root->_left) + 1;
		size_t rheight = _Height(root->_right) + 1;

		return lheight > rheight ? lheight : rheight;
	}
	//�ж϶������Ƿ�Ϊƽ�������
	bool _IsAVLBinaryTree(Node *root)
	{
		if (root==NULL)
		{
			return true;
		}

		int heightorder = abs((int)(_Height(root->_right) - _Height(root->_left)));

		return ((heightorder<2)
			&&(_IsAVLBinaryTree(root->_left))
			&& (_IsAVLBinaryTree(root->_right)));
	}
	//�ж϶������Ƿ�Ϊƽ����������Ż��汾
	bool _IsAVLBinaryTree(Node *root,  int & depth)
	{
		//���Ϊ�գ������ڵ㷵
		if (root == NULL)
		{
			depth = 0;
			return true;
		}
		//��¼��ڵ���ҽڵ����
		int left = 0;
		int right = 0;
		//��ȡ�����õķ�ʽ���²�ݹ���ж�����޸��Ժ��Ӱ����һ��
		if (_IsAVLBinaryTree(root->_left, left) && _IsAVLBinaryTree(root->_right, right))
		{
			//����ƽ������
			int pf = right - left;
			//�ж�ƽ�������Ƿ�Ϸ�
			if (pfIsInvaild(pf))
			{
	//�Ϸ��������������������ȣ�Ȼ����Ϊ�Ǵ����ã����Ե��ݹ�ص���һ���ʱ���ϲ��е�right��left�����������������
				depth = 1 + (right > left ? right : left);
				return true;
			}
		}
		return false;
	}
	//�ж�ƽ�������Ƿ�Ϸ�
	bool pfIsInvaild(const int& pf)
	{
		return abs(pf) < 2;
	}