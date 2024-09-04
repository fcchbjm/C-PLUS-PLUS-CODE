//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)//成员函数共用一份空间
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
//	int _year;//成员变量在实例化对象时才会开空间
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
//class A//类成员变量遵循内存对齐
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
//class B//没有成员变量，给一个字节，占位标识对象存在
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
//	//void SetDate(Date* const this, int year, int month, int day)//通过this指针区分调用函数的对象
//	void SetDate(int year, int month, int day)//成员函数共用一份空间
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	//void PrintDate(Date* const this)//this指针指向的对象不能修改，但指向的内容可以修改；this指针存放在栈（寄存器）中
//	void PrintDate()//this指针不能显式传参
//	{
//		cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//	}
//private:
//	int _year;//成员变量在实例化对象时才会开空间
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
//	pa->PrintA();//正常运行
//	//mov         rcx, qword ptr[pa]//pa传给ecx（this指针）
//	//call        A::PrintA(07FF7F2441479h)//调用函数
//	//没有解引用，不会报空指针的错误
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
//		//发生了解引用，游戏崩溃，空指针
//	}
//private:
//	int _i;
//};
//
//int main()
//{
//	A* pa = nullptr;
//	pa->PrintA();//运行崩溃
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//编译器默认生成无参构造函数，对内置类型的初始化没有要求，对自定义类型初始化调用其构造函数，如果没有，就报错
//	// 如果用户显式定义，则编译器不再生成
//	// 可以不传参的构造函数都叫默认构造
//	//构造函数支持函数重载
//	Date()//无参构造函数
//	{
//		_year = 0;
//		_month = 0;
//		_day = 0;
//	}
//
//	Date(int year, int month, int day)//带参构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//Date(int year = 0, int month = 0, int day = 0)//全缺省构造函数，不能与无参构造函数同时存在，存在歧义
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
//	////构造函数在对象定义时自动调用
//	Date d1;//无参构造函数不能加上括号，为了与函数声明区分
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
//			perror("malloc申请空间失败");
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
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//	// 编译器默认生成MyQueue的构造函数调用了Stack的构造，完成了两个成员的初始化
//	// 编译器默认生成MyQueue的析构函数调用了Stack的析构，释放的Stack内部的资源
//	// 显示写析构，也会自动调用自定义类型（Stack）的析构
//	// 后定义的先析构
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

