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

