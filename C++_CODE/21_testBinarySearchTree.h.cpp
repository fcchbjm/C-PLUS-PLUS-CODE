#include "Binary Search Tree.h"

//int main()
//{
//	nskey::BSTree<int> t;
//	int a[] = { 8, 3, 1, 10, 1, 6, 4, 7, 14, 13};
//	for (auto e : a)
//	{
//		t.Insert(e);
//	}
//
//	t.InOrder();
//
//	t.Insert(16);
//	t.Insert(3);
//	t.InOrder();
//
//	t.Erase(3);
//	t.InOrder();
//
//	t.Erase(8);
//	t.InOrder();
//
//	for (auto e : a)
//	{
//		t.Erase(e);
//		t.InOrder();
//	}
//
//	return 0;
//}

//int main()
//{
//	nskey_value::BSTree<string, string> dict;
//	//BSTree<string, string> copy = dict;
//	dict.Insert("left", "左边");
//	dict.Insert("right", "右边");
//	dict.Insert("insert", "插入");
//	dict.Insert("string", "字符串");
//
//	string str;
//	while (cin >> str)
//	{
//		auto ret = dict.Find(str);
//		if (ret)
//		{
//			cout << "->" << ret->_value << endl;
//		}
//		else
//		{
//			cout << "无此单词，请重新输入" << endl;
//		}
//	}
//
//	return 0;
//}

//// set key
//// map key/value
//int main()
//{
//	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜",
//	"苹果", "香蕉", "苹果", "香蕉" };
//	nskey_value::BSTree<string, int> countTree;
//
//	for (const auto& str : arr)
//	{
//		// 先查找水果在不在搜索树中
//		// 1、不在，说明水果第一次出现，则插入<水果, 1>
//		// 2、在，则查找到的结点中水果对应的次数++
//		//BSTreeNode<string, int>* ret = countTree.Find(str);
//		auto ret = countTree.Find(str);
//		if (ret == nullptr)
//		{
//			countTree.Insert(str, 1);
//		}
//		else
//		{
//			// 修改value
//			ret->_value++;
//		}
//	}
//	countTree.InOrder();
//
//
//	nskey_value::BSTree<string, int> copy = countTree;
//	copy.InOrder();
//
//	return 0;
//}
