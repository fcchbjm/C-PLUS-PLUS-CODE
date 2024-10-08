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


//#include <iostream>
//using namespace std;
//
//void printi(int i = 0)
//{
//	cout << i << endl;
//}
//
////全缺省
//void printnums(int i = 0, int j = 0, int k = 0)
//{
//	cout << i << j << k << endl;
//}
//
////半缺省 不能间隔，从右往左
//void printnums2(int i, int j = 0, int k = 0)
//{
//	cout << i << j << k << endl;
//}
//
//int main()
//{
//	printi();//没有参数时，使用参数的默认值
//	printi(20);//传参时，使用指定的实参
//	printnums();
//	printnums2(10);
//	printnums2(10, 20);
//	printnums2(10, 20, 30);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//void Swap(int* px, int* py)
//{}
//
//void Swap(double* px, double* py)
//{}
//
//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
////下面两个函数构成重载
////f()但是调用时，会报错，存在歧义，编译器不知道调用谁
//namespace ns
//{
//	void f1()
//	{
//		cout << "f()" << endl;
//	}
//}
//
//
//void f1()
//{
//	cout << "f()" << endl;
//}
//
//void f1(int a = 10)//参数带缺省值
//{
//	cout << "f(int a)" << endl;
//}
//
////返回值不同不能作为重载条件，因为调用时也无法区分
//void fxx()
//{}
//
//int fxx()
//{
//	return 0;
//}

//#include<iostream>
//#include<assert.h>
//using namespace std;
//
////int main()
////{
////	int a = 0;
////	// 引用：b和c是a的别名
////	int& b = a;
////	int& c = a;
////
////	// 也可以给别名b取别名，d相当于还是a的别名
////	int& d = b;
////	++d;
////
////	// 这里取地址我们看到是一样的
////	cout << &a << endl;
////	cout << &b << endl;
////	cout << &c << endl;
////	cout << &d << endl;
////	return 0;
////}
//
//void Swap(int& rx, int& ry)
//{
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
//
//void Swap(int* px, int* py)
//{}
//
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void STInit(ST& rs, int n = 4)
//{
//	rs.a = (STDataType*)malloc(n * sizeof(STDataType));
//	rs.top = 0;
//	rs.capacity = n;
//}
//
//// 栈顶
//void STPush(ST& rs, STDataType x)
//{
//	//assert(ps);
//
//	// 满了， 扩容
//	if (rs.top == rs.capacity)
//	{
//		printf("扩容\n");
//		int newcapacity = rs.capacity == 0 ? 4 : rs.capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(rs.a, newcapacity *
//			sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//		rs.a = tmp;
//		rs.capacity = newcapacity;
//	}
//	rs.a[rs.top] = x;
//	rs.top++;
//}
//// int STTop(ST& rs)
//int& STTop(ST& rs)
//{
//	assert(rs.top > 0);
//	return rs.a[rs.top];
//}
//
////int main()
////{
////	int x = 0, y = 1;
////	cout << x << " " << y << endl;
////	//Swap(&x, &y);
////
////	Swap(x, y);
////	cout << x << " " << y << endl;
////
////
////	// 调用全局的
////	ST st1;
////	STInit(st1);
////	STPush(st1, 1);
////	STPush(st1, 2);
////
////	cout << STTop(st1) << endl;
////
////	return 0;
////}
//
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode, * PNode;
//
//// typedef struct ListNode* PNode;
//
////void ListPushBack(LTNode** phead, int x)
//void ListPushBack(LTNode*& phead, int x)
////void ListPushBack(PNode& phead, int x)
//{
//	PNode newnode = (PNode)malloc(sizeof(LTNode));
//	newnode->val = x;
//	newnode->next = NULL;
//	if (phead == NULL)
//	{
//		phead = newnode;
//	}
//	else
//	{
//		//...
//	}
//}
//
//int main()
//{
//	//PNode plist = NULL;
//	LTNode* plist = NULL;
//	ListPushBack(plist, 1);
//
//	return 0;
//}
