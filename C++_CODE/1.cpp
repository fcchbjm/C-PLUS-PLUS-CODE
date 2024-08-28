//#include <iostream>//包含头文件 i - input 输入  o - output 输出  stream - 流 
//
//using namespace std;//使用名字为std的命名空间
//
//int main()
//{
//	cout << "Hello world" << endl;//输出并换行 endl - endline
//	return 0;
//}

#include <iostream>

//#include <stdlib.h>
//int rand = 20;
//“rand”: 重定义；以前的定义是“函数”

int i = 15;

namespace ns//域
{
	int rand = 10;

	int i = 5;

	struct Node
	{
		int val;
		struct Node* pnext;
	};

	namespace ns1//命名空间可以嵌套
	{
		int i = 25;
	}
}

namespace ns//相同名称的命名空间会自动合并(即使处于不同文件中)
{
	int j = 30;
	int k = 35;
}

int main()
{
	//:: 域作用限定符
	//std::cout << rand << std::endl;

	std::cout << i << std::endl;
	std::cout << ns::i << std::endl;//在名字为ns的命名空间中寻找名为rand的变量或函数
	std::cout << ::i << std::endl;//默认全局

	struct ns::Node* pn = NULL;

	std::cout << ns::ns1::i << std::endl;

	std::cout << ns::j << std::endl;
	std::cout << ns::k << std::endl;

	//C++标准库存放在名为std（standard）的命名空间中

	return 0;
}

