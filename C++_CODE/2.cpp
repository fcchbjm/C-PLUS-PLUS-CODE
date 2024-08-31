//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int& ri = i;//引用在定义时必须初始化
//  //int& ri;//error
//	int& ri2 = i;//一个对象可以拥有多个引用
//
//
//	int j = 10;
//	ri = j;//引用不可以修改指向的对象，只能修改值
//	cout << i << j << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//权限只能缩小，不能放大
//	int i = 0;
//	int& ri = i;
//	const int& rci = i;
//	//int& rc = 0;//error
//	const int& rc = 0;//临时对象具有常性，必须用常引用
//
//	//const int j = 0;
//	// int& rj = j;//权限放大
//
//	const int k = 0;
//	int kk = k;//拷贝不存在权限放大
//
//	double d = 12.34;
//	int ii = d;
//	const int& rid = d;//引用了隐式类型转换时产生的临时对象，临时对象具有常性
//	double& rd = d;
//
//	return 0;
//}

////inline主要用于替代C语言中的宏
//#include <iostream>
//using namespace std;
//#define DEF_ADD(x,y) ((x) + (y))
//inline int INL_ADD(int x, int y)//内联声明的定义不能分离到不同文件（无法找到函数地址）
//{
//	return x + y;
//}
//
//int main()
//{
//	cout << DEF_ADD(3, 5) << endl;
//	cout << DEF_ADD(3^3, 5|3) << endl;
//
//	cout << INL_ADD(3, 5) << endl;
//	cout << INL_ADD(3^3, 5|3) << endl;
//
//	return 0;
//}

////NULL与nullptr
//#include <iostream>
//using namespace std;
//
//void func(int x)
//{
//	cout << "func(int x)" << endl;
//}
//
//void func(int* px)
//{
//	cout << "func(int* px)" << endl;
//}
//
//int main()
//{
//	func(0);
//	func(NULL);//C语言：define NULL 0
//	func((int*)NULL);
//	func(nullptr);//nullptr为关键字，会自动转换为对应类型的指针类型
//
//	void* p1 = NULL;
//	int* p2 = (int*)p1;//必须强制类型转换
//
//	return 0;
//}

////类和对象
//#include <iostream>
//using namespace std;
//
////类成员默认私有
//class MyClass
//{
//public:
//	int i = 0;
//	char c = 0;
//private:
//	int pri_i = 0;
//	char pri_c = 0;
//};
//
////struct在C++中实现为默认为公有的类，并且可以有构造函数
//struct MyStruct
//{
//	MyStruct(int I = 0, char C = 0, double D = 0)
//	{
//		i = I;
//		c = C;
//		d = D;
//	}
//	int i = 0;
//	char c = 0;
//	double d = 0;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day)//构造函数，初始化对象
//	{
//		m_year = year;
//		mMonth = month;
//		_day = day;
//	}
//
//	int GetYear()
//	{
//		return m_year;
//	}
//
//	int GetMonth()
//	{
//		return mMonth;
//	}
//
//	int GetDay()
//	{
//		return _day;
//	}
//
//	void printDate()//定义在类中的函数默认内联
//	{
//		cout << m_year << "/" << mMonth << "/" << _day << endl;
//	}
//private:
//	//成员变量的声明，没有空间，实例化时开空间
//	//为了区分成员变量，一般情况下在前面加上标识，一般以 _ 或 m 开头
//	int m_year;//前面加上 m_ 
//	int mMonth;//前面加上m并将首字母大写
//	int _day;//前面加上 _ 
//};
//
//void printDate(Date& d)
//{
//	cout << d.GetYear() << "/" << d.GetMonth() << "/" << d.GetDay() << endl;
//}
//
//struct ListNodeC
//{
//	int val;
//	struct ListNodeC* next;//兼容C语言写法
//};
//
//struct ListNodeCPP
//{
//	int val;
//	ListNodeCPP* next;//类名代表类型
//};
//
//int main()
//{
//	MyClass c1;//类名可以直接声明对象
//	c1.c;//可以直接访问公有成员
//	c1.i;
//	//c1.pri_i;//不能直接访问私有成员
//	//c1.pri_c;
//
//	Date d1(2024, 8, 31);
//	printDate(d1);
//
//	return 0;
//}
