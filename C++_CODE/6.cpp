//#include <iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time(int hour)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	Date(int& xx, int year, int month, int day)
//		:_year(year)//参数初始化列表，括号内为值或表达式
//		,_month(month)//参数参数列表为每个成员变量定义的地方，只能出现一次
//		,_day(day)
//		,_n(1)//const变量必须在定义的时候初始化
//		,_ref(xx)//引用成员必须在定义的时候初始化
//		,_t(1)
//		,_ptr((int*)malloc(12))
//	{
//		if (_ptr == nullptr)
//		{
//			perror("malloc fail");
//		}
//		else
//		{
//			memset(_ptr, 0, 12);
//		}
//	}
//
//	void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	// 声明
//	int _year;
//	int _month;
//	int _day;
//
//	// error C2512: “Time”: 没有合适的默认构造函数可用
//	// error C2530 : “Date::_ref” : 必须初始化引用
//	// error C2789 : “Date::_n” : 必须初始化常量限定类型的对象
//	const int _n;
//	int& _ref;
//	Time _t;//不写初始化列表将会调用无参构造函数
//
//	int* _ptr;
//};
//
//int main()
//{
//	int x = 0;
//	// 对象定义
//	Date d1(x, 2024, 7, 14);
//	d1.Print();
//
//	//const int x = 1;
//	// x = 1;
//
//	//int& rx;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time(int hour)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(year)//成员变量尽可能走初始化列表
//		,_month(month)
//		//_day没有写参数初始化列表，为随机值
//	{}
//
//	void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	// C++11
//	// 声明，缺省值->初始化列表用的
//	int _year = 1;
//	int _month = 1;
//	int _day;
//
//	int* _ptr = (int*)malloc(12);
//	Time _t = 1;
//};
//
//int main()
//{
//	// 对象定义
//	Date d1(2024, 7, 14);
//	d1.Print();
//
//	//Date d2;
//	//d2.Print();
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a = 0)
//		: _a1(a)//参数初始化列表顺序按照成员变量声明顺序
//		, _a2(_a1)
//	{}
//	void Print() 
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	//成员变量声明
//	int _a2 = 2;
//	int _a1 = 2;
//};
//
//int main()
//{
//	A aa(1);
//	aa.Print();
//
//	//运行结果： A. 1 1  B. 2 2  C. 编译报错  D. 1 随机值  E. 1 2
//}




