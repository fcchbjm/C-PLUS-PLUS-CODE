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
//	//�������캯��
//	// δ��ʽ���忽�����캯������ִ��ǳ���������ֽڿ�����
//	Date(const Date& d)//���������������͵�����
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
//		// ��Ҫ��_aָ����Դ����ͬ�������Դ�ٿ���ֵ
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
//	// Stack����ʾʵ�ֿ������죬���Զ����ɵĿ����������ǳ����
//	// �ᵼ��st1��st2�����_aָ��ָ��ͬһ����Դ������ʱ���������Σ��������
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
//typedef void(A::*PF)(); //��Ա����ָ������
//
//int main()
//{
//	// void(A::*pf)() = nullptr;
//	PF pf = nullptr;
//	// C++�涨��Ա����Ҫ��&����ȡ������ָ��
//
//	pf = &A::func;
//	A aa;
//	(aa.*pf)();//.* ����������ʽ�Ļص�thisָ��
//}

////����������
//// 1.����Ҫ��һ���Զ�������
//// 2.��������ز�����������������������һ����
////  1��һԪ���������һ������
////  2����Ԫ���������������������һ��������Ӧ�������࣬�ڶ���������Ӧ������Ҳ�
//// 3.����ǳ�Ա��������һ������Ϊ��ʽ���ݵ�thisָ�룬��������һ��
//// 4.���غ������ȼ����䣬���ܴ���������
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
//	//��ֵ���������
//	Date& operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		return *this;
//	}
//
//	// ��������
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	// ����
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
//	// Ĭ����inline
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
//	// ��������غ���������ʾ����
//	//operator==(d1, d2);
//	// ��������ת���� operator==(d1, d2);
//	//d1 == d2;
//
//	// ��������غ���������ʾ����
//	d1.operator==(d2);
//
//	// ��������ת���� d1.operator==(d2);
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
//	// ��ֵ���ؿ���
//	d1 = d2;
//
//	// ��������
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
