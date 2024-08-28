//#include <iostream>//包含头文件 i - input 输入  o - output 输出  stream - 流 
//
//using namespace std;//使用名字为std的命名空间
//
//int main()
//{
//	cout << "Hello world" << endl;//输出并换行 endl - endline
//	return 0;
//}

//#include <iostream>
//
////#include <stdlib.h>
////int rand = 20;
////“rand”: 重定义；以前的定义是“函数”
//
//int i = 15;
//
//namespace ns//域
//{
//	int rand = 10;
//
//	int i = 5;
//
//	struct Node
//	{
//		int val;
//		struct Node* pnext;
//	};
//
//	namespace ns1//命名空间可以嵌套
//	{
//		int i = 25;
//	}
//}
//
//namespace ns//相同名称的命名空间会自动合并(即使处于不同文件中)
//{
//	int j = 30;
//	int k = 35;
//}
//
//int main()
//{
//	//:: 域作用限定符
//	//std::cout << rand << std::endl;
//
//	std::cout << i << std::endl;
//	std::cout << ns::i << std::endl;//在名字为ns的命名空间中寻找名为rand的变量或函数
//	std::cout << ::i << std::endl;//默认全局
//
//	struct ns::Node* pn = NULL;
//
//	std::cout << ns::ns1::i << std::endl;
//
//	std::cout << ns::j << std::endl;
//	std::cout << ns::k << std::endl;
//
//	//C++标准库存放在名为std（standard）的命名空间中
//
//	return 0;
//}

//#include <iostream>
//using namespace std;//将std的命名空间全部展开
//using std::cout;//将std的命名空间中的cout展开

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//std::cin istream类对象 面向窄字符的标准输入流
//	//std::cout ostream类对象 面向窄字符的标准输出流
//	//std::endl 函数 换行+刷新缓冲区
//	//<< 流插入运算符（C语言中为左移操作符） 支持重载
//	//>> 流提取运算符（C语言中为右移操作符） 支持重载
//
//	int i = 10;
//	cout << i << endl;//自动识别类型
//
//	int j = 20;
//	char c = 'a';
//
//	cout << j << c << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// 在io需求比较高的地方，如部分大量输入的竞赛题中，加上以下3行代码
//	// 可以提高C++IO效率
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	return 0;
//}

