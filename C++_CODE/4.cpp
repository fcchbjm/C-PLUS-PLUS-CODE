//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//
//	void SetDate(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	//拷贝构造函数
//	// 未显式定义拷贝构造函数，会执行浅拷贝（逐字节拷贝）
//	Date(const Date& d)//参数必须是类类型的引用
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void PrintDate()
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void func1(Date& d)
//{
//	cout << &d << endl;
//	d.PrintDate();
//}
//
//int main()
//{
//	Date d1;
//	d1.SetDate(2024, 9, 12);
//	func1(d1);
//
//	Date d2 = d1;
//	func1(d2);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc failed");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//
//	// st2(st1)
//	Stack(const Stack& st)
//	{
//		cout << "Stack(const Stack& st)" << endl;
//
//		// 需要对_a指向资源创建同样大的资源再拷贝值
//		_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc failed");
//			return;
//		}
//		memcpy(_a, st._a, sizeof(STDataType) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}
//
//	void Push(STDataType x)
//	{
//		if (_top == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//				sizeof(STDataType));
//			if (tmp == NULL)
//			{
//				perror("realloc fail");
//				return;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_top++] = x;
//
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//
//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//
//	// Stack不显示实现拷贝构造，用自动生成的拷贝构造完成浅拷贝
//	// 会导致st1和st2里面的_a指针指向同一块资源，析构时会析构两次，程序崩溃
//	Stack st2(st1);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
// 
//class A
//{
//public:
//	void func()
//	{
//		cout << "A::func()" << endl;
//	}
//};
//
//typedef void(A::*PF)(); //成员函数指针类型
//
//int main()
//{
//	// void(A::*pf)() = nullptr;
//	PF pf = nullptr;
//	// C++规定成员函数要加&才能取到函数指针
//
//	pf = &A::func;
//	A aa;
//	(aa.*pf)();//.* 操作符，隐式的回调this指针
//}

////操作符重载
//// 1.至少要有一个自定义类型
//// 2.运算符重载参数个数和运算操作对象个数一样多
////  1）一元运算符——一个参数
////  2）二元运算符——两个参数，第一个参数对应运算符左侧，第二个参数对应运算符右侧
//// 3.如果是成员函数，第一个参数为隐式传递的this指针，参数会少一个
//// 4.重载后结合优先级不变，不能创建操作符
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//赋值运算符重载
//	Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		return *this;
//	}
//
//	// 拷贝构造
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	// 构造
//	Date(const Date* d)
//	{
//		_year = d->_year;
//		_month = d->_month;
//		_day = d->_day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//	// 默认是inline
//	int GetMonthDay(int year, int month)
//	{
//		static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30,
//31, 31, 30, 31, 30, 31 };
//
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
//		{
//			return 29;
//		}
//
//		return monthDayArray[month];
//	}
//
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//
//	//d1 + 100;
//	Date operator+(int day);
//
//	//d1 - 100;
//	Date operator-(int day);
//
//	// d1 - d2;
//	int operator-(const Date& d);
//
//	Date& operator+=(int day);
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// d1 += 100
//Date& Date::operator+=(int day)
//{
//	_day += day;
//	while (_day > GetMonthDay(_year, _month))
//	{
//		_day -= GetMonthDay(_year, _month);
//		++_month;
//		if (_month == 13)
//		{
//			_year++;
//			_month = 1;
//		}
//	}
//
//	return *this;
//}
//
//// d1 + 100
//Date Date::operator+(int day)
//{
//	Date tmp = *this;
//
//	tmp += day;
//	/*tmp._day += day;
//	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
//	{
//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
//		++tmp._month;
//		if (tmp._month == 13)
//		{
//			tmp._year++;
//			tmp._month = 1;
//		}
//	}*/
//
//	return tmp;
//}
//
////bool operator==(const Date& d1, const Date& d2)
////{
////	return d1._year == d2._year
////		&& d1._month == d2._month
////		&& d1._day == d2._day;
////}
//
//void test01()
//{
//	Date d1(2024, 9, 12);
//	Date d2(2024, 9, 13);
//
//	// 运算符重载函数可以显示调用
//	//operator==(d1, d2);
//	// 编译器会转换成 operator==(d1, d2);
//	//d1 == d2;
//
//	// 运算符重载函数可以显示调用
//	d1.operator==(d2);
//
//	// 编译器会转换成 d1.operator==(d2);
//	cout << (int)(d1 == d2) << endl;
//
//	d1 + 100;
//	//d1 - 100;
//	//d1 - d2;
//}
//
//void test02()
//{
//	Date d1(2024, 9, 12);
//	Date d2(2024, 9, 13);
//
//	// 赋值重载拷贝
//	d1 = d2;
//
//	// 拷贝构造
//	Date d3(d2);
//	Date d4 = d2;
//
//	d4 = d3 = d1;
//}
//
//void test03()
//{
//	Date d1(2024, 9, 12);
//	Date d2 = d1 + 100;
//	//Date d3(d1 + 100);
//	d1.Print();
//	d2.Print();
//
//	//d1 += 100;
//	//d1.Print();
//
//	d1 += 30000;
//	d1.Print();
//}
//
//int main()
//{
//	test01();
//
//	//test02();
//
//	//test03();
//
//	return 0;
//}
