//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)//��Ա��������һ�ݿռ�
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void PrintDate()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	int _year;//��Ա������ʵ��������ʱ�ŻῪ�ռ�
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.SetDate(2024, 9, 4);
//	d2.SetDate(2024, 8, 31);
//	d1.PrintDate();
//	d2.PrintDate();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A//���Ա������ѭ�ڴ����
//{
//public:
//	void PrintA()
//	{
//		cout << _ch << " " << _i << endl;
//	}
//private:
//	char _ch;
//	int _i;
//};
//
//class B//û�г�Ա��������һ���ֽڣ�ռλ��ʶ�������
//{
//	void PrintB()
//	{
//		//...
//	}
//};
//
//class C
//{
//	//...
//};
//
//int main()
//{
//	cout << "sizeof(A) = " << sizeof(A) << endl;
//	cout << "sizeof(B) = " << sizeof(B) << endl;
//	cout << "sizeof(C) = " << sizeof(C) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//void SetDate(Date* const this, int year, int month, int day)//ͨ��thisָ�����ֵ��ú����Ķ���
//	void SetDate(int year, int month, int day)//��Ա��������һ�ݿռ�
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	//void PrintDate(Date* const this)//thisָ��ָ��Ķ������޸ģ���ָ������ݿ����޸ģ�thisָ������ջ���Ĵ�������
//	void PrintDate()//thisָ�벻����ʽ����
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//	}
//private:
//	int _year;//��Ա������ʵ��������ʱ�ŻῪ�ռ�
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.SetDate(2024, 9, 4);
//	d2.SetDate(2024, 8, 31);
//	d1.PrintDate();
//	d2.PrintDate();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << "A::PrintA();" << endl;
//	}
//};
//
//int main()
//{
//	A* pa = nullptr;
//	pa->PrintA();//��������
//	//mov         rcx, qword ptr[pa]//pa����ecx��thisָ�룩
//	//call        A::PrintA(07FF7F2441479h)//���ú���
//	//û�н����ã����ᱨ��ָ��Ĵ���
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << "A::PrintA();" << endl;
//		cout << _i << endl;
//		// cout << this->_i << endl;
//		//�����˽����ã���Ϸ��������ָ��
//	}
//private:
//	int _i;
//};
//
//int main()
//{
//	A* pa = nullptr;
//	pa->PrintA();//���б���
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//������Ĭ�������޲ι��캯�������������͵ĳ�ʼ��û��Ҫ�󣬶��Զ������ͳ�ʼ�������乹�캯�������û�У��ͱ���
//	// ����û���ʽ���壬���������������
//	// ���Բ����εĹ��캯������Ĭ�Ϲ���
//	//���캯��֧�ֺ�������
//	Date()//�޲ι��캯��
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//
//	Date(int year, int month, int day)//���ι��캯��
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//Date(int year = 0, int month = 0, int day = 0)//ȫȱʡ���캯�����������޲ι��캯��ͬʱ���ڣ���������
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
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
//int main()
//{
//	////���캯���ڶ�����ʱ�Զ�����
//	Date d1;//�޲ι��캯�����ܼ������ţ�Ϊ���뺯����������
//	Date d2(2024, 9, 4);
//	d1.PrintDate();
//	d2.PrintDate();
//	return 0;
//}

//#include<iostream>
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
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	// ...
//
//	~Stack()
//	{
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
//// ����Stackʵ�ֶ���
//class MyQueue
//{
//public:
//	// ������Ĭ������MyQueue�Ĺ��캯��������Stack�Ĺ��죬�����������Ա�ĳ�ʼ��
//	// ������Ĭ������MyQueue����������������Stack���������ͷŵ�Stack�ڲ�����Դ
//	// ��ʾд������Ҳ���Զ������Զ������ͣ�Stack��������
//	// �����������
//	~MyQueue()
//	{
//		cout << "~MyQueue()" << endl;
//	}
//private:
//	Stack pushst;
//	Stack popst;
//	//int size;
//};
//
//int main()
//{
//	MyQueue mq;
//	//Stack st1;
//	//Stack st2;
//
//	return 0;
//}

