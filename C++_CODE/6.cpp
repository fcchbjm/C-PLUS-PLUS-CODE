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
//		:_year(year)//������ʼ���б�������Ϊֵ����ʽ
//		,_month(month)//���������б�Ϊÿ����Ա��������ĵط���ֻ�ܳ���һ��
//		,_day(day)
//		,_n(1)//const���������ڶ����ʱ���ʼ��
//		,_ref(xx)//���ó�Ա�����ڶ����ʱ���ʼ��
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
//	// ����
//	int _year;
//	int _month;
//	int _day;
//
//	// error C2512: ��Time��: û�к��ʵ�Ĭ�Ϲ��캯������
//	// error C2530 : ��Date::_ref�� : �����ʼ������
//	// error C2789 : ��Date::_n�� : �����ʼ�������޶����͵Ķ���
//	const int _n;
//	int& _ref;
//	Time _t;//��д��ʼ���б�������޲ι��캯��
//
//	int* _ptr;
//};
//
//int main()
//{
//	int x = 0;
//	// ������
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
//		:_year(year)//��Ա�����������߳�ʼ���б�
//		,_month(month)
//		//_dayû��д������ʼ���б�Ϊ���ֵ
//	{}
//
//	void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	// C++11
//	// ������ȱʡֵ->��ʼ���б��õ�
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
//	// ������
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
//		: _a1(a)//������ʼ���б�˳���ճ�Ա��������˳��
//		, _a2(_a1)
//	{}
//	void Print() 
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	//��Ա��������
//	int _a2 = 2;
//	int _a1 = 2;
//};
//
//int main()
//{
//	A aa(1);
//	aa.Print();
//
//	//���н���� A. 1 1  B. 2 2  C. ���뱨��  D. 1 ���ֵ  E. 1 2
//}




